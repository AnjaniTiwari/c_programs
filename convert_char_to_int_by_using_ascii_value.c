#include<stdio.h>
#include<string.h>
void convert_digit(char *);
int main()
{
    char a[10];
    printf("Enter a number:");
    scanf("%s",a);
    convert_digit(a);
    return 0;
}
void convert_digit(char *p)
{
    int n,len,i;
    len=strlen(p);
    if(len==1)
    {
        n=*p-'0';
        printf("%d",n);
    }
    else
    {
        n=*p-'0';
        for(i=1;i<len;i++)
        {
            n=n*10+*(p+i)-'0';
        }
        printf("%d",n);

    }
}

