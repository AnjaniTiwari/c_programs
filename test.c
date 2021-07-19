main()
{
    char c[]={"21"};
    char *p=c;
    int n;
    n=*p-'0';
    n=n*10+(*(p+1)-'0');
    printf("%d",n);
}
