#include<stdio.h>

int main()
{
    int a=1,b=1,i,j,n,d,c;

    scanf("%d",&n);
    c=a*a;
    d=a*c;

    for(i=0; i<n; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d %d %d\n",a,c,d);

            c=c+1;
            d=d+1;

        }
        a=a+1;
        c=a*a;
        d=a*c;
    }
    return 0;

}
