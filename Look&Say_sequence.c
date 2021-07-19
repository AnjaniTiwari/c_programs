#include<stdio.h>
int main()
{
    int n,remander,count,newNum,i,k;
    n=1;
    for(i=1;i<=5;i++)
    {
        printf("%d\n",n);
        k=1;
        newNum=0;
        while(n!=0)
        {
            remander=n%10;
            count=1;
            n=n/10;
            while(remander==n%10)
            {
                count++;
                n=n/10;
            }
            newNum=(((count*10)+remander)*k)+newNum;-

            k=k*100;
        }
        n=newNum;
    }
    return 0;
}
