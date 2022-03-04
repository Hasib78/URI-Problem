#include<stdio.h>
int main()
{
    double a,b,d,e,i,j,f,sum=0,max=0,min=10;
    char c[10];
    scanf("%lf",&a);
    for(i=0;i<a;i++)
    {
        scanf("%s",c);
        scanf("%lf",&b);
        for(j=0;j<7;j++)
        {
            scanf("%lf",&d);
            sum=sum+d;
            if(d>=max)
            {
                max=d;
            }
            if(d<=min)
            {
                min=d;
            }


        }
        e=sum-(max+min);
        f=e*b;
        printf("%s %.2lf\n",c,f);
        sum=0,max=0,min=10;
    }

    return 0;
}
