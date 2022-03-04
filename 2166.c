#include<stdio.h>
int main()
{
    double a,b,sum=0,i;
    scanf("%lf",&a);

    while(a--)
    {
        sum=sum+2;
        sum=1/sum;

    }
    b=sum+1;
    printf("%.10lf\n",b);

    return 0;
}
