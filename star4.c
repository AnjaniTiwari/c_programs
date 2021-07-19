main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k=64;
        for(j=1;j<=7;j++)
        {
            j<=4?k++:k--;
            if(j<=5-i||j>=3+i)
                printf("%c",k);
            else
                printf(" ");
        }
        printf("\n");
    }
}
