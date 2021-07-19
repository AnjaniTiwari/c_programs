main()
{
    int a,b;
    printf("Enter two no: ");
    scanf("%d%d",&a,&b);
    a=a+b; //a=1,b=2 a=3
    b=a-b;  //b=1
    a=a-b;  //a=2
    printf("a=%d\nb=%d",a,b);
}
