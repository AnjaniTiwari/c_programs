main()
{
    int n,i;
    int *t;
    printf("Enter a number:");
    scanf("%d",&n);
    t=calloc(n,sizeof(n));
    for(i=0;i<n;i++)
    {
        if(i==1||i==2)
        {
            *(t+i)=1;
            printf("%d ",*t+i);
        }
        else
        {
            *(t+i)=*(t+i-2)+*(t+i-1);
            printf("%d ",*(t+i));
        }

    }
}
