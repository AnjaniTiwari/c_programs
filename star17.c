main()
{
    int i,j,k,n;
    printf("Enter a value of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=n;j++)
        {
            if(j<=i)
            {
                printf("%d",k);
                k=1-k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
