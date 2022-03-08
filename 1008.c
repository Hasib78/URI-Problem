#include<stdio.h>

int main()
{
    int NUMBER,A;

    double SALARY,B;

    scanf("%d%d",&NUMBER,&A);

    scanf("%lf",&B);

    SALARY = A*B;

    printf("NUMBER = %d\n",NUMBER);

    printf("SALARY = U$ %.2lf\n",SALARY);

    return 0;
}
