#include<string.h>
int main()
{
    char s1[2][20]={"Anjani","swapnil"};
    if(s1[0][0]>s1[1][0])
        strcpy(s1[0],s1[1]);
    printf("%s",s1);
}
