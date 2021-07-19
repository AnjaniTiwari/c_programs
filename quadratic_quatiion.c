main()
{
    int a,b,c,d;
    float x,y;
    printf("Enter a x^2 and x and constnt term:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d<0)
    {
        printf("Emgnatri no");
    }
    if(d==0)
    {
        printf("both root are equal");
    }
    if(d>0)
    {
        -b+sqrt(d)/2a
    }
}
