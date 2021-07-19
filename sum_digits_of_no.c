main()
{
    int n,s=0,x=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n)
    {
        x=n%10;
        s=s+x;
        n=n/10;
    }
    printf("\nsum is %d ",s);

}
