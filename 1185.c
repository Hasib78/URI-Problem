#include<stdio.h>
int main()
{
    int i,j,k=10;
    double b[12][12],sum=0;
    char c[2];

    scanf("%s",&c);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&b[i][j]);
        }
    }
    for(i=0; i<10; i++)
    {
        for(j=0; j<k; j++)
        {
            sum=sum+b[i][j];
        }

        k--;

    }
    if(c[0]=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if(c[0]=='M')
    {
        printf("%.1lf\n",sum/66);
    }
    return 0;

}


