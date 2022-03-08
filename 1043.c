#include<stdio.h>

int main()
{
    double a,b,x,d,e;

    scanf("%lf%lf%lf",&a,&b,&x);

    d = (a+b+x);

    e = .5*x*(a+b);

    if(a+b>x && a+x>b && b+x>a)
    {
        printf("Perimetro = %.1lf\n",d);
    }
    else{
        printf("Area = %.1lf\n",e);
    }
    return 0;

}
