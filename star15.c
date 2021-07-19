main()
{
    int i,j;
    char c;
    for(i=1;i<=4;i++)
    {
        c='A';
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                printf("%c",c);
                j<4?c++:c--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
