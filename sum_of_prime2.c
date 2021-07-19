main()
{
    int n,i;
    printf("Enter a no:");
    scanf("%d",&n);
    for(i=2;i<=(n-i);i=nextPrime(i))
    {
        if(isPrime(n-i))
            printf("%d + %d = %d\n",(n-i),i,n);
    }
}
int nextPrime(int n)
{
    do
    {
        n++;
    }while(!isPrime(n));
    return(n);
}
int isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return(0);
    }
    return(1);
}
