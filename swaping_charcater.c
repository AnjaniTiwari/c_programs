main()
{
    char a='A',b='B';
    printf("a=%c\nb=%c",a,b);
    a=a+b;  //a=1,b=2 a=3
    b=a-b;  //b=1
    a=a-b;  //a=2
    printf("\na=%c\nb=%c",a,b);
}
