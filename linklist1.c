#include<stdio.h>
#include<stdlib.h>
struct node
{
    int memberId;
    char memberName[50];
    char mobileNumber[11];
    struct node *link;
};
struct node *start=NULL;
struct node * createNode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return(n);
}
insertNode()
{
    struct node *temp,*t;
    temp=createNode();
    printf("Enter Member Id:");
    scanf("%d",&temp->memberId);
    fflush(stdin);
    printf("\nEnter Member Name:");
    gets(temp->memberName);
    printf("\nEnter mobileNumber:");
    scanf("%s",&temp->mobileNumber);
    temp->link=NULL;
    if(start==NULL)
        start=temp;
    else
    {
        t=start;
        while(t->link!=NULL)
            t=t->link;
        t->link=temp;
    }
}
viewNode()
{
    if(start==NULL)
        printf("\nList Not Exist");
    else
    {
        struct node *t;
        t=start;
        do
        {
        printf("\nMumber Id: %d",t->memberId);
        printf("\nMumber Name: %s",t->memberName);
        printf("\nMobile No: %s",t->mobileNumber);
        t=t->link;
        }while(t!=NULL);
    }
}
deleteNode()
{
    if(start==NULL)
        printf("\nNode not exist");
    else
    {
        struct node *t;
        t=start;
        start=start->link;
        free(t);
    }
}
manu()
{
    printf("\n1.Insert Mumber Details");
    printf("\n2.View Mumber Details");
    printf("\n3.Delete Mumber Details");
    printf("\n4.Exit program");
}
main()
{
    int c;
    manu();
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            insertNode();
            break;
        case 2:
            viewNode();
            break;
        case 3:
            deleteNode();
            break;
        case 4:
            exit(0);
        }
    }
}

