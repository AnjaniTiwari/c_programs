#include<string.h>
void sorting_no(char *p)
{
   int l,round,i,temp;
   l=strlen(p);
   for(round=1;round<=l-1;round++)
   {
       for(i=0;i<l-round;i++)
       {
           if(*(p+i)>*(p+i+1))
           {
              temp=*(p+i);
              *(p+i)=*(p+i+1);
              *(p+i+1)=temp;
           }
       }
   }
}
int main()
{
    char n[10];
    printf("Enter a randame digit:");
    scanf("%s",n);
    sorting_no(n);
    printf("\nsoring no: %s",n);
    return 0;

}
