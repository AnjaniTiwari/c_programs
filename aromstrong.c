main()
{
    int n,i,a=0,s=0,r,y;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        y=i;
        a=i;
        while(a)
        {
            r=a%10;
            a=a/10;
            s=s+(r*r*r);
        }
        if(s==y)
            printf("%d is armstrong number",y);
    }
}
