main()
{
    int s,e,c,i;
    printf("Enter two no range:");
    scanf("%d%d",&s,&e);
    while(s<=e)
    {
        c=s;
        for(i=2;i<c;i++)
        {
            if(c%i==0)
                break;
        }
        if(i==c)
            printf("%d ",i);
        s++;
    }
}
