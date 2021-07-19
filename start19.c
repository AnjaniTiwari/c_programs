#include<stdio.h>
int main()
{
    int i,j,k=0;
    for( i=1; i<=9; i++)
    {
        i<=5?k++:k--;
        for( j=1; j<=k; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
