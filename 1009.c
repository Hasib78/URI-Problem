#include<stdio.h>

int main()
{
    char ch;

    double A,B,TOTAL;

    scanf("%s",&ch);

    scanf("%lf%lf",&A,&B);

    TOTAL = A + (3*B/20);

    printf("TOTAL = R$ %.2lf\n",TOTAL);

    return 0;


}
