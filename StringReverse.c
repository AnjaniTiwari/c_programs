main()
{
    char s[20],c;
    int l;
    printf("Enter your String:");
    scanf("%s",s);
    for(l=0;s[l]!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        c=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=c;
    }
    printf("%s",s);

}
/*stringReverse(char *c)
{
    int l,i;
    char t;
    for(l=0;*(c+l)!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        t=*(c+i);
        *(c+i)=*(l-1-i);
        *(l-1-i)=t;
    }
}*/
