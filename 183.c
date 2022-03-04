#include<stdio.h>
int main()
{
    int i,j;
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
    for(i=0; i<11; i++)
    {
        for(j=i+1; j<12; j++)
        {
            sum=sum+b[i][j];
        }

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

