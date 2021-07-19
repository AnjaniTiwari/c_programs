#include<stdio.h>
main
(
    char s[10];
    int l;
    printf("Enter String:");
    scanf("%s",s);
   l=strlen(s);
   for(i=0;i<l/2;i++)
   {
       if(s[i]!=s[l-1-i])
       {
           printf("Not a palindrom");
           break;
       }
   }
   if(i==l/2)
    printf("palindrom");
}

