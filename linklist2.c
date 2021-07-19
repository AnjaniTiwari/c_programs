struct node
{
    int rollno;
    char name[30];
    struct node *link;
};
struct node *start=NULL;

struct node* createNode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return(n);
}
void insertNode()
{
    struct node *temp,t;
    temp=createNode();
    printf("Enter Rollno:");
    scanf("%d",&temp->rollno);
    printf("Enter a Name:");
    gets(&temp->name);
    temp->link=NULL;
    if(start==NULL)
        start=temp;
    else
    {
        t=start;
        while(t!=NULL)
        {
            t=t->link;
        }
        t=temp;
    }
}

main()
{

}
