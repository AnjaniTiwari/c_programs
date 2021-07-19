main()
{
    int i,j,k=0,p1,p2=-1;
    for(i=1;i<=7;i++)
    {
        i<4?k++:k--;
        for(j=1;j<=7;j++)
        {
                if(5-k&&3+k)
                {
                    printf("*");
                }
                else
                    printf(" ");
        }
        printf("\n");
    }

}
