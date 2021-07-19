main()
{
    int n,i=2;
    printf("Enter a no:");
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
        else
            i++;

    }
}
