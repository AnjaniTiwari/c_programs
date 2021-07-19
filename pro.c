int i;
main()
{
    int j;
    for(;;)
    {
        if(j=f(i))
            printf("j=%d\n",j);
        else
            break;
    }

}
int f(int x)
{
    static int y=2;
    y--;
    return(y-x);
}
