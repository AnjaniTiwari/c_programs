#include<stdio.h>
#include<stdlib.h>
struct node
{
    int id,age;
    char name[20];
    struct node *link;
};
struct node *start=NULL;
struct node * createNode()
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    return t;
}
void insertNode()
{
    struct node *t,*t2;
    t=createNode();
    printf("Enter your id:");
    scanf("%d",&t->id);
    fflush(stdin);
    printf("Enter your name:");
    gets(t->name);
    printf("Enter your age:");
    scanf("%d",&t->age);
    t->link=NULL;
    if(start==NULL)
        start=t;
    else
    {
        t2=start;
        while(t2->link!=NULL)
            t2=t2->link;
        t2->link=t;
    }
}
void deleteNode()
{
    struct node *t;
    if(start==NULL)
        printf("List is empty");
    else
    {
       t=start;
       start=start->link;
       free(t);
    }
}
void viewList()
{
    struct node *t;
    if(start==NULL)
        printf("List is empty");
    else
    {
       t=start;
       while(t!=NULL)
       {
           printf("id:%d ",t->id);
           printf("name:%s ",t->name);
           printf("age:%d \n",t->age);
           t=t->link;
       }
    }
}
reverseNode()
{
    struct node *t1,*t2;
    t1=NULL;
    if(start==NULL)
        printf("List is empty");
    else
    {
        while(start!=NULL)
        {
            t2=start->link;
            start->link=t1;
            t1=start;
            start=t2;
        }
        printf("List is reverse\n");
        start=t1;
    }
}
int manu()
{
    int choice;
    printf("\n1.add member diteles\n");
    printf("2.delete member\n");
    printf("3.view all members\n");
    printf("4.reverse list\n");
    printf("5.Exit program\n");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    return choice;
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
            deleteNode();
            break;
        case 3:
            viewList();
            break;
        case 4:
            reverseNode();
            break;
        case 5:
            exit(0);
            break;
        default:
             printf("Invalid choice");
        }
    }
}
