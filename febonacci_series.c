main()
{
    int n;
    printf("How many tems you want to show in fibonacci series: ");
    scanf("%d",&n);
    fibonacci(n);


}
fibonacci(int n)
{
    int t[50];
    int i=0;
    while(i<n)
    {
        if(i<2)
        {
            t[i]=1;
            printf("%d ",t[i]);
            i++;
        }
        else
        {
            t[i]=t[i-1]+t[i-2];
            printf("%d ",t[i]);
            i++;
        }
    }
}
