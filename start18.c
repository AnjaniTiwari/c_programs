main()
{
    int i,j,k=0,p1=0,p2;
    for(i=1; i<=8; i++)
    {
        p2=p1;
        i<=4?k++:k--;
        for(j=1; j<=8; j++)
        {
            if(j>=5-k&&j<=3+k)
            {
                printf(" %d",p2);
                j<4?p2++:p2--;
            }
            else
                printf("  ");
        }
        i<4?p1++:p1--;
        printf("\n");
    }
}
