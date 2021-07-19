main()
{
    int n,a=1;
    printf("Enter a no:");
    scanf("%d",&n);
    while(n)
    {
        printf("%d",n);
        a=a*n;
        n--;
    }
    printf("\n%d",a);
}
