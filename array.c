main()
{
    int *p;
    int n,i;
    p=(int*)calloc(sizeof(int),n);
    printf("Enter how many numbers you want to store: ");
    scanf("%d",&n);
    printf("Enter your numbers: ");
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
}
