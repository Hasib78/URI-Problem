#include<stdio.h>
int main()
{
    int i,j,a;
    double b[12][12],sum=0;
    char c[2];
    scanf("%d",&a);
    scanf("%s",&c);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&b[i][j]);
        }
    }
    for(j=0;j<12;j++)
    {
     sum=sum+b[a][j];
    }
    if(c[0]=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if(c[0]=='M')
    {
        printf("%.1lf\n",sum/12);
    }
    return 0;

}
