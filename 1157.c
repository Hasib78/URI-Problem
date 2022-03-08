#include<stdio.h>
int main()
{
    int a,i,divisor;

    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        divisor=a%i;

        if(divisor==0)
        {
            printf("%d\n",i);
        }

    }
    return 0;
}
