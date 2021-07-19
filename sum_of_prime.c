main()
{
    int i,j,n;
    printf("Enter a no:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        j=2;
        while((n-i)%j!=0)
            j++;
        if((n-i)==j)
        {
            j=2;
            while(i%j!=0)
            {
                j++;
                if(i==j)
                    printf("%d + %d = %d\n",(n-i),i,n);
            }
        }
    }
}
