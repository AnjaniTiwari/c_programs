main()
{
    int i,j,k=0,b;
    for(i=1; i<=21; i++)
    {
        i<=11?k++:k--;
        b=k-1;
        for(j=1; j<=21; j++)
        {
            if(j>=12-k&&j<=10+k)
            {
                printf("%d ",b%10);
                j<11?b++:b--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}
