#include<stdio.h>

int main()
{
    int a=1,n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("%d %d %d\n",a,a*a,a*a*a);

        a=a+1;
    }
    return 0;
}
