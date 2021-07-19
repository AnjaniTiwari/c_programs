main()
{
    int x,*p,i;
    p=&x;
    *p=0;
    for(i=1;i<=10;i++)
        printf("%d ",*p+i);

}
