#include<stdio.h>

int main()
{
    int i;

    double a,avg,count=0,sum = 0;

    for(i=0;i<6;i++)
    {
        scanf("%lf",&a);

        if(a>0)
        {
            sum = sum +a;
            count++;

        }
    }
    avg =(sum/count);

    printf("%.0lf valores positivos\n",count);

    printf("%.1lf\n",avg);


    return 0;
}

