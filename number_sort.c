#include<string.h>
void sort_no(char*,int);
int main()
{
    char n[20];
    int l;
    printf("Enter a random number:");
    scanf("%s",n);
    l=strlen(n);
    sort_no(n,l);
    printf("%s",n);
    return 0;
}
void sort_no(char *p,int l)
{
    int round,j,temp;
    for(round=1;round<=l-1;round++)
    {
        for(j=0;j<l-round;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
}
