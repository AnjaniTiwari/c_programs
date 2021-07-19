main()
{
    int n,i,a=-1,b=1,c;
    printf("Enter how many terms you want to show:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
