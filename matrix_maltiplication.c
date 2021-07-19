main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,k,s;

    printf("Enter first matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("Enter second matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            s=0;
            for(k=0;k<3;k++)
                s=s+a[i][k]*b[k][j];
            c[i][j]=s;
        }
    printf("Multiplication\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
}
