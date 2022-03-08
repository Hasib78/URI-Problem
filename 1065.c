#include<stdio.h>

int main()
{
    int i,count = 0,ara[10];

    for(i = 0;i<=4;i++)
    {
        scanf("%d",&ara[i]);

        if(ara[i]%2 == 0){

           count = count + 1;

        }


    }
    printf("%d valores pares\n",count);

    return 0;



}
