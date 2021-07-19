main()
{
    char s1[30]="__My___name____is_____Anjani___Tiwari___";
    printf("How many words in sentence:");
    printf("%d words in your sentence",countWords(s1));

}
countWords(char          )
{
    int i=0,c=0;
    char s[30];
    s[]=removeExtraSpace(s1[]);
    while(s[i]!='\0')
    {
       if(s[i]=='_')
            c++;
    }
    return(c+1);
}
removeExtraSpace(char s1[])
{
    char s2[30]
    int i=0,j=0;

       while(s1[i]!='\0')
    {
        if(s1[i]!='_')
        {
            s2[j]=s1[i];
            j++;
        }
        else
        {
            if(s1[i-1]!='_')
            {
                s2[j]=s1[i];
                j++;
            }
        }
        i++;
    }
    i=0,j=0;
    while(s2[i]!='\0')
    {
        if(s2[i]!='_')
        {
            s3[j]=s2[i];
            j++;
        }
        else
        {
            if(s2[i-1]&&s2[i+1]!='_'&&s2[i+1]!='\0')
            {
                s3[j]=s2[i];
                j++;
            }
        }
        i++;
    }
    return(s3);
}
