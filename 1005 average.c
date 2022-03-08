#include<stdio.h>

int main()
{
    double A,B,MEDIA,h;

    scanf("%lf%lf",&A,&B);

    h = (A*3.5) + (B*7.5);

    MEDIA = h/(3.5+7.5);

    printf("MEDIA = %.5lf\n",MEDIA);

    return 0;


}
