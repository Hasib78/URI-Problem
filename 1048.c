#include<stdio.h>

int main()
{
    float a,x,y;

    int b;

    char w = '%';

    scanf("%f",&a);

    if(a>=0.00 && a<=400.00)
    {
        x=(a*15)/100;

        y=a+x;
        b=15;

    }

    else if(a>400.00 && a<=800.00)
    {
        x=(a*12)/100;

        y=a+x;
        b=12;

    }
    else if(a>800.00 && a<=1200.00)
    {
        x=(a* 10)/100;
        y=a+x;
        b=10;




    }
    else if(a>1200.00 && a<=2000.00)
    {
        x=(a*7)/100;
        y=a+x;
        b=7;

    }

    else if(a>2000.00)
    {
        x=(a*4)/100;
        y=a+x;
        b=4;



    }
    printf("Novo salario: %.2f\n",y);

    printf("Reajuste ganho: %.2f\n",x);

    printf("Em percentual: %d %c\n",b,w);


    return 0;
}
