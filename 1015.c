#include<stdio.h>

#include<math.h>

int main()
{
    double a,b,c,d,x;

    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

    x = sqrt((c-a)*(c-a) + (d-b)*(d-b));

    printf("%.4lf\n",x);

    return 0;

}
