#include<stdio.h>
int main()
{
    int x,y;

    double z;

    double ara[5]={4.00,4.50,5.00,2.00,1.50};

    scanf("%d%d",&x,&y);

    z = ara[x-1] * y;

    printf("Total: R$ %.2lf\n",z);

    return 0;


}
