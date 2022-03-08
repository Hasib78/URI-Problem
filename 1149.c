#include<stdio.h>

int main()
{
    int a,b,c=0,i;

    scanf("%d%d",&a,&b);

    while(b<0 || b==0)
    {
        scanf("%d",&b);
    }
    for(i=0;i<b;i++)
    {
        c=i+a+c;
    }
    printf("%d\n",c);

    return 0;
}
