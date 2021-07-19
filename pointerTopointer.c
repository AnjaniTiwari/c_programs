int main()
{
    int x=5,*y,**z,***p;
    y=&x;
    z=&y;
    p=&z;
    printf("%d\n",&x);
    printf("%d",**p);
}
