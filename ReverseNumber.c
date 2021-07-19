#include<stdio.h>
int main()
{
    int number,newNumber;
    printf("Enter a number:\n");
    scanf("%d",&number);
    while(number)
    {
        newNumber=(newNumber*10)+number%10;
        number=number/10;
    }
    printf("%d is your Reverse number\n",newNumber);
    return 0;
}
