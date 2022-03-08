#include<stdio.h>

int main()
{
    int a,i,b =2;

    scanf("%d",&a);

    for(i = 1;i<= a;i++)
    {
        if(i%2 == 0)
        {
            printf("%d^%d = %d\n",i,b,i*i);
        }
    }
    return 0;
}
