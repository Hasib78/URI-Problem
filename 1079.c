#include<stdio.h>
int main()
{
    double a,b,c,sum,average,i,n;

    scanf("%lf",&n);

    for(i=0;i<n;i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);

        sum =(a*2)+(b*3)+(c*5);

        average=sum/10;

        printf("%.1lf\n",average);


    }
        return 0;

}

