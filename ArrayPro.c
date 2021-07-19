#define RIGHT 0
#define LEFT 1
main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    display(a,10);
    siftArray(a,10,RIGHT,3);
    printf("\n");
    display(a,10);

}
void display(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
        printf(" %d",a[i]);
}
siftArray(int a[],int size,int d,int sifting)
{
    int temp,i;
    if(d==0)
    {
        while(sifting)
        {
           temp=a[size-1];
           for(i=1;i<=size-1;i++)
            a[size-i]=a[size-1-i];
           a[0]=temp;
           sifting--;
        }
    }
    else
    {
        while(sifting)
        {
            temp=a[0];
            for(i=0;i<size-1;i++)
                a[i]=a[i+1];
            a[i]=temp;
            sifting--;
        }
    }
}

