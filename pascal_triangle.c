main()
{
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    printTri(n);

}
printTri(int l)
{
    int i,j,k;
    for(i=1;i<=l;i++)
    {
        k=1;
        for(j=1;j<=2*l-1;j++)
        {
            if(j>=(l+1)-i&&j<=(l-1)+i&&k)
            {
                printf("*");
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}
