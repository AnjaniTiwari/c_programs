main()
{
    int a,b,i;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(i=a>b?a:b;i<a*b;i=i+(a>b?a:b))
    {
        if(i%a==0&&i%b==0)
            break;
    }
    printf("LCM is %d",i);
}
