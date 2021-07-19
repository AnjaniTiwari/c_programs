#include<stddef.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node * createNode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return(n);
}
insertNode()
{
    struct node *t,*t2;
    t=createNode();
    printf("Enter data:");
    scanf("%d",&t->data);
    t->next=NULL;
    if(start==NULL)
        start=t;
    else
    {
        t2=start;
        while(t2->next!=NULL)
            t2=t2->next;
        t2->next=t;
    }
}
viewList()
{
    struct node *t;
    if(start==NULL)
        printf("\n list is not exist");
    else
    {
      t=start;
      while(t!=NULL)
      {
          printf("%d ",t->data);
          t=t->next;
      }
    }
}
deleteNode()
{
    struct node *t1,*t2,*t3;
    int x;

    printf("\nEnter which data you want to delete:");
    scanf("%d",&x);

    if(start==NULL)
        printf("List is Not exist\n");
    else if(start->data==x)
    {
        t1=start;
        start=start->next;
        free(t1);
    }
    else
    {
        t1=start;
        while(t1->data!=x)
        {
            t2=t1;
            t1=t1->next;
        }
        t3=t1->next;
        free(t1);
        t2->next=t3;
    }
    t3=NULL;
    t1=start;
    while(t1!=NULL)
    {
        t3=t2;
        t2=t1;
        t1=t1->next;
    }
    if(t2->data==x)
    {
        t3->next=NULL;
        free(t2);
    }
}
int manu()
{
    int choice;
    printf("\n1.insert list\n");
    printf("2.view list\n");
    printf("3.delete list\n");
    printf("4.exit program\n");

    printf("\nEnter your choice:");
    scanf("%d",&choice);
    return(choice);
}
main()
{
    while(1)
    {
        switch(manu())
        {
        case 1:
            insertNode();
            break;
        case 2:
            viewList();
            break;
        case 3:
            deleteNode();
            break;
        case 4:
            exit(0);
            break;
        case 5:
            printf("Invalid choice");
        }
    }
}
