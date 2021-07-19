#include<stdio.h>
#include<string.h>
int len=0;
int main(){
 int index=0;
 char n[4];
 char *single_digit[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
 char *tenth_place[]={"","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
 char *two_digit[]={"","","eleven","twely","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
 char *hundred_thousand[]={"hundred","thousand"};
     do{
         printf("Enter a four digit number:");
         scanf("%s",n);
         len=strlen(n);
         if(len<=4)
            break;
         else
            printf("invalid input try again\n");
        }while(1);
    if(len==1)
    {
        index=n[0]-'0';
        printf("%s ",single_digit[index]);
    }
    if(len==2 && n[1]=='0')
    {
        index=n[0]-'0';
        printf("%s ",tenth_place[index]);
    }
    else if(convert_number(n)>10&&convert_number(n)<20)
        {
          index=n[0]-'0'+n[1]-'0';
          printf("%s ",two_digit[index]);
        }
    else if(convert_number(n)>20)
        {
            index=n[0]-'0';
            printf("%s ",tenth_place[index]);
            index=n[1]-'0';
            printf("%s ",single_digit[index]);
        }
    if(len==3 && n[1]=='0' && n[2]=='0')
    {
        index=n[0]-'0';
        printf("%s ",single_digit[index]);
        printf("%s ",hundred_thousand[0]);
    }

}
int convert_number(char *p)
{
 int n,i;
 n=*p+0-'0';
 for(i=1;i<len;i++)
    n=n*10+*(p+i)-'0';
 return n;
}
