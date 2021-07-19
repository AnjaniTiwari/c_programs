main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    factorial(n);

}
factorial(int n)
{
    int f=2;
   while(n!=1)
    {
        if(n%f==0)
        {
            printf("%d ",f);
            n=n/f;
        }
        else
            f++;
    }
}
