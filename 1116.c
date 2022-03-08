#include<stdio.h>

int main()
{
    double n,a,b,c,i;

    scanf("%lf",&n);

    for(i=0; i<n; i++)
    {
        scanf("%lf%lf",&a,&b);

        if(b!=0)
        {
            c=a/b;
            printf("%.1lf\n",c);
        }
        else
        {
            printf("divisao impossivel\n");
        }
    }
    return 0;
}
