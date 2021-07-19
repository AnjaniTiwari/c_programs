main()
{
    int n,i=1;
    printf("Enter How many terms you want to show: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",fib(i));
        i++;
    }

}
int fib(int t)
{
    if(t==1||t==2)
        return(1);
    else
    {
        return(fib(t-1)+fib(t-2));
    }
}
