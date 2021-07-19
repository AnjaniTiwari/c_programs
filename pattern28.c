int main()
{
    int i,j,k=0,n=5;
    for(i=1;i<=n;i++)
    {
        i<=n/2+1?k++:k--;
        for(j=1;j<=n;j++)
        {
            if(i==n/2+1 || (j>=n/2+k&&j<=n/2+k))
            printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
