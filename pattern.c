main()
{
    int i,j;
    char k1;
    for(i=1;i<=4;i++)
    {
        k1=64+i;
        for(j=1;j<=4;j++)
        {
            if(j<=i)
                printf("%c ",k1--);
            else
                printf(" ");
        }
        printf("\n");
    }
}
