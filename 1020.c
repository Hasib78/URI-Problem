#include<stdio.h>
int main()
{
    int a,y,m;

    scanf("%d",&a);

    y = a/365;

    a = a%365;

    m = a/30;

    a = a%30;

    printf("%d ano(s)\n",y);

    printf("%d mes(es)\n",m);

    printf("%d dia(s)\n",a);

    return 0;
}
