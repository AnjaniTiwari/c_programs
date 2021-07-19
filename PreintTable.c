main()
{
    int t;
    printf("Enter which table you want to show:");
    scanf("%d",&t);
    table(t);
}
table(int t)
{
    int i;
    for(i=1;i<=10;i++)
        printf(" %d  x  %d  =  %d\n",t,i,t*i);
}
