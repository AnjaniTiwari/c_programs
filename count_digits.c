main()
{
    char n[10];
    int i,l;
    int c=0;
    printf("Enter your number:");
    scanf("%s",n);
    for(l=0;n[l]!='\0';l++);
    for(i=0;i<l;i++)
    {
        if(n[i]>=48&&n[i]<=57)
            c++;
    }
    printf("Total digits of your number is : %d",c);
}
