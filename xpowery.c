main()
{
    int x,y,a,p;
    printf("Enter value of x power y:");
    scanf("%d%d",&x,&y);
    if(y==0)
    {
        a=1;
        printf("%d",a);
    }
    else if(y==1)
    {
        a=x;
        printf("%d",a);
    }
    else
    {
        p=y;
        a=x*x;
        p=p-2;
        while(p)
        {
            a=a*x;
            p--;
        }
        printf("%d power %d is %d",x,y,a);
    }
}
