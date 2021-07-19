main()
{
    char *s;
    pass(malloc(sizeof(char)));
    printf("Enter a String:");
    gets(s);

}
pass(char *p)
{
    printf("%s",p);
}
