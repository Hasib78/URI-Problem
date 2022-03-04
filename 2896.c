#include<stdio.h>
int main()
{
    int a,b,c,d,e,i;

    scanf("%d",&a);

    for(i=0;i<a;i++)
    {

        scanf("%d%d",&b,&c);
        d=b%c;
        e=b/c;
        printf("%d\n",d+e);

    }
    return 0;

}
