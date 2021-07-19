main()
{
    int n,a=1;
    printf("Enter a no:");
    scanf("%d",&n);
    do
    {
        printf("%d",n);
        if(n>1)
            printf(" x ");
        a=a*n;
        n--;
    }while(n);
    printf(" = %d",a);
}
