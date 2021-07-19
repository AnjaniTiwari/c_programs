int main()
{
    const int i=10;
    printf("%d ",i);
    foo(&i);
    printf("%d ",i);

}
foo( int const  *i)
{
    *i=20;
}
