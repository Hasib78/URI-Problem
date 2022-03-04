#include<stdio.h>
int main()
{
    double n[100];
    int i;
    double a=0;
    scanf("%lf",&n[0]);
    printf("N[0] = %.4lf\n",n[0]);
    a=n[0];


    for(i=1;i<100;i++)
    {
        a=a/2;
        printf("N[%d] = %.4lf\n",i,a);
    }
    return 0;
}
