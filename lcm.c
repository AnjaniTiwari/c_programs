main()
{
    int a,b,i=2,s=1;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    while(a>1||b>1)
    {
        if(a%i!=0&&b%i!=0)
            i++;
        if(a%i==0&&b%i==0)
        {
            a=a/i;
            b=b/i;
            s=s*i;
        }
        else
        {
            if(a%i==0)
            {
                a=a/i;
                s=s*i;
            }
            else
            {
                b=b/i;
                s=s*i;
            }
        }
    }
    printf("LCM is %d",s);
}
