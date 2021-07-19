main()
{
    int n,a=2,b=3,i,min;
    printf("Enter value n");
    scanf("%d",&n);
    printf("%d co prime numbers\n",n);
    while(n)
    {
        for(i=2;i<=a;i++)
        {
            if(a%i==0&&b%i==0)
                break;
        }
        if(i==a+1)
        {
            printf("(%d,%d)\n",a,b);
            n--;
            if(n==0)
                exit(0);
            b++;
        }
        else
            b++;
        }
}
