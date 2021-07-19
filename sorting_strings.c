#include<string.h>
int main()
{
    int i,j;
    char s[3][20]={"swapnil","paper","apple"};
    char temp_string[20];
    for(i=0;i<=2;i++)
    printf("%s\n",s[i]);
    for(i=1;i<=2;i++)
    {
       for(j=0;j<=2;j++)
       {
          if(s[j][j]>s[j+1][j])
          {
             srtcpy(temp_string,s[j]);
             strcpy(s[j],s[j+1]);
             strcpy(s[j+1],temp_string);
          }
       }
    }
        for(i=0;i<=2;i++)
    printf("%s\n",s[i]);

}
