main()
{
    int m[3][3],n[3][3];
    int i,j;
    printf("Enter a matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&m[i][j]);
    printf("\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&n[i][j]);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",m[i][j]);
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",n[i][j]);
        printf("\n");
    }
    printf("\nMatrix maltiplication:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",m[i][j]*n[i][j]);
        printf("\n");
    }

}
