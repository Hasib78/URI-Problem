#include<stdio.h>

int main()
{
    double h,s,l;

    scanf("%lf%lf",&h,&s);

    l = (h*s)/12;

    printf("%.3lf\n",l);

    return 0;
}
