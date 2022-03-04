#include<stdio.h>
int main()
{
    double a,c;
    double sum=0,b=0;
    char d[50];
    while(scanf("%[^\n]",d)!=EOF)
    {
        scanf("%lf",&a);
        sum=sum+a;
        b++;

    }

    c=sum/b;
    printf("%.1lf\n",c);

    return 0;


}
