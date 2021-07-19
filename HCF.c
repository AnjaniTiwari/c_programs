main()
{
    int a,b,i,c=1;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(i=1;i<=(a<b?a:b);i++)
        if(a%i==0&&b%i==0)
           // if(c<i)
                c=i;
    printf("HCF is %d",c);
}
