main()
{
    char s[10];
    printf("Enter a String:");
    scanf("%s",s);
    if(isPalindrom(s))
        printf("%s is palindrom",s);
    else
        printf("%s is not palindrom",s);
}
int isPalindrom(char s[10])
{
    int i,l;
    l=strlen(s);
    for(i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i])
            return(0);
    }
    return(1);
}
