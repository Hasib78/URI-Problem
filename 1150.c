#include<stdio.h>
int main()
{
    int  a,b,i,sum=0,count=0;

    scanf("%d",&a);
    scanf("%d",&b);

    if(b<=a)
    {
        while(b<=a)
        {
            scanf("%d",&b);
        }
    }
    i=a;
    while(sum<=b)
    {
        sum = sum + i;
        count++;
        i++;
    }
    printf("%d\n",count);
}
