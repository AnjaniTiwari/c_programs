main()
{
   /* char s[20],c;
    int i;
    printf("Enter a string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
        c=s[i];
        s[i]=c-32;
        }
        else
            s[i]=' ';

    }
    printf("%s",s); */


    char s[20];
    int i;
    printf("Enter a String");
    gets(s);
    for(i=0;s[i];i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-32;
    }
    printf("%s",s);


}
