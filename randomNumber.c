#include<stdio.h>
#include<stdlib.h>
main()
{
    int n[10],i,t,j;
    srand(time(NULL));
    for(i=0;i<=9;i++){
        t=rand()%10;
        for(j=0;j<=i-1;j++){
            if(t==n[j])
                break;
        }
        if(i==j)
            n[i]=t;
        else
            i--;
    }
    for(i=0;i<=9;i++)
        printf("%d ",n[i]);

}
