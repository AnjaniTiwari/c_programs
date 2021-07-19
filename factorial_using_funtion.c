int factorial(int);
main()
{
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,factorial(n));
}
int factorial(int x)
{
    int f=1;
    while(x)
    {
        f=f*x;
        x--;
    }
    return f;
}
