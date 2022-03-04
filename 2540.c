#include<stdio.h>
int main()
{
    double a,b,c,i,count=0;
    while(scanf("%lf",&a)==1)
    {
        for(i=0; i<a; i++)
        {
            scanf("%lf",&b);
            if(b==1)
            {
                count++;
            }
        }
        c=a*2/3;
        if(count>=c)
        {
            printf("impeachment\n");
        }
        else
        {
            printf("acusacao arquivada\n");
        }
        count=0;
    }
    return 0;
}
