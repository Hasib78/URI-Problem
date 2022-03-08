#include<stdio.h>

int main()
{


    double avg,a,b=0,count=0;

    while(1)
    {
        scanf("%lf",&a);
        if(a<0)
        {
            break;
        }
        else{
            b=b+a;
            count++;
        }
    }
    avg=b/count;

    printf("%.2lf\n",avg);

    return 0;
}
