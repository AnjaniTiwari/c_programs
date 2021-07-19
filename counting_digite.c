#include<string.h>
int main()
{
    char c[10];
    int len,num;
    char *single[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    char *double_digit[]={"","ten","elven","twely","thirteen","fourteen","fifteen","seventeen","eighteen","nineteen"};
    char *tens_place[]={"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
    char *hundred_place[]={"hundred"};
    char *thousand_place[]={"thousand"};
    printf("Enter a number:\n");
    scanf("%s",c);
    len=strlen(c);
    if(len == 1)
    {
       num=c[0]-48;
       printf("%s",single[num]);
    }
    if(len == 2 && c[0]==49)
    {
        num=(c[0]-48)+(c[1]-48);
        printf("%s",double_digit[num]);
    }
    else if(len == 2 && c[1]== 48)
    {
        num=c[0]-48;
        printf("%s",tens_place[num]);
    }
    else if(len == 2)
    {
        num=c[0]-48;
        printf("%s",tens_place[num]);
        num=c[1]-48;
        printf(" %s",single[num]);
    }
    if(len == 3 && c[1] == 0 && c[2] == 0)
    {
        num=c[0]-48;
        printf("%s ",single[num]);
        printf("%s ",hundred_place[0]);
    }
    else if(len == 3)
    {
        num=c[0]-48;
        printf("%s ",single[num]);
        printf("%s ",hundred_place[0]);
        num=c[1]-48;
        printf("%s ",tens_place[num]);
        num=c[2]-48;
        printf("%s ",single[num]);
    }
    if(len == 4 && c[1] == 0 && c[2] == 0 && c[3] == 0)
    {
        num = c[0]-48;
        printf("%s ",single[num]);
        printf("%s ",thousand_place[0]);
    }
    else if(len == 4 && c[1] != 0 && c[2] == 0 && c[3] == 0)
    {
        num = c[0]-48;
        printf("%s ",single[num]);
        printf("%s ",thousand_place[0]);
        num = c[1]-48;
        printf("%s ",single[num]);
        printf("%s ",hundred_place[0]);

    }
    else if(len == 4 && c[1] != 0 && c[2] != 0 && c[3] == 0)
    {
        num = c[0]-48;
        printf("%s ",single[num]);
        printf("%s ",thousand_place[0]);
        num = c[1]-48;
        printf("%s ",single[num]);
        printf("%s ",hundred_place[0]);
        num=c[2]-48;
        printf("%s ",tens_place[num]);

    }
  /*  else if(len == 4 && c[1]!=0 && c[2]!=0 && c[3]!=0)
    {
        num = c[0]-48;
        printf("%s ",single[num]);
        printf("%s ",thousand_place[0]);
        num=c[1]-48;
        printf("%s ",single[num]);
        printf("%s ",hundred_place[0]);
        num=c[2]-48;
        printf("%s ",tens_place[num]);
        num=c[3]-48;
        printf("%s ",single[num]);

    } */
    return 0;
}
