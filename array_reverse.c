#include<string.h>
char * reverse_array();
int main()
{
    char *arr2;

    strcpy(arr2,reverse_array());
    printf("%s",arr2);
}
char* reverse_array()
{
    char arr[10],c;
    int i,l;
    printf("Enter a string:");
    scanf("%s",arr);
    l=strlen(arr);
    for(i=0;i<l/2;i++)
    {
        c=arr[i];
        arr[i]=arr[l-1-i];
        arr[l-1-i]=c;
    }
    return arr;
}
