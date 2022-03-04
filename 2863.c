#include<stdio.h>
int main()
{
    double a[100],b,m;
    int i;
    while(scanf("%lf",&b)==1)
    {
        if(b>=2 && b<=99)
        {
            for(i=0; i<b; i++)
            {
                scanf("%lf",&a[i]);
            }
            for(i=0; i<b; i++)
            {
                if(a[i]>=9 && a[i]<=11)
                {

                    m=a[0];

                    for(i=1; i<b; i++)
                    {
                        if(m>a[i])
                        {
                            m=a[i];
                        }
                    }
                }



            }
        }
        printf("%.2lf\n",m);



    }
    return 0;
}
