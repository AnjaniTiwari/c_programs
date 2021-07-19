#include<stdio.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start=NULL;
struct node* createNode()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->link=NULL;
    return(temp);
}
void insertNode()
{
    struct node *t1,*t2;
    t1=createNode();
    printf("Enter info value:");
    scanf("%d",&t1->info);
    t1->link=NULL;
    if(start==NULL)
        start=t1;
    else
    {
        t2=start;
       while(t2->link!=NULL)
        t2=t2->link;
       t2->link=t1;
    }
}
void viewList()
{
    if(start==NULL)
        printf("List not exist\n");
    else
    {
            printf("info value is: %d",start->info);

    }
}
void deleteList()
{
    struct node *t;
    if(start==NULL)
       printf("List is emtey");
    else
    {
       t=start;
       start=start->link;
       free(t);
    }
}
manu()
{
    printf("\nSelect your choice\n");
    printf("1.Insert List\n");
    printf("2.View List\n");
    printf("3.delete list\n");
    printf("4.Exit program\n");
}
main()
{
    int choice;
    while(1)
    {
        manu();
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insertNode();
            break;
        case 2:
            viewList();
            break;
        case 3:
            deleteList();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice");
        }
    }
}
