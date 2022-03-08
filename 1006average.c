#include<stdio.h>

int main()
{
    double A,B,C,h,MEDIA;

    scanf("%lf%lf%lf",&A,&B,&C);

    h = (A*2) + (B*3) + (C*5);

    MEDIA = h/(2+3+5);

    printf("MEDIA = %.1lf\n",MEDIA);

    return 0;
}
