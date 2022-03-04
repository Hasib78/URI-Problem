#include<stdio.h>
int main()
{
    double a,b,c,d;
    scanf("%lf %lf",&a,&b);
    c=b-a;
    d=(c/a)*100;
    printf("%.2lf%%\n",d);

    return 0;
}
