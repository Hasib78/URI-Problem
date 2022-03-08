#include<stdio.h>

int main()
{
    int i,j,a=7;

    for(i=1;i<=9;i=i+2)
    {
        for(j=0;j<3;j++)
        {
            printf("I=%d J=%d\n",i,a);

            a--;
        }
        a=a+5;



    }
    return 0;
}
