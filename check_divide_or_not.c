main()
{
    int n;
    printf("Enter a number to check divide by 5 or not:");
    scanf("%d",&n);
    if(n%5==0)
        printf("%d is divisible by 5",n);
    else
        printf("%d is not divisible by 5",n);
}
