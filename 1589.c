#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    scanf("%d",&a);

    for(i=0; i<a; i++)
    {
        scanf("%d",&b);
        scanf("%d",&c);
        d=b+c;
        printf("%d\n",d);
    }
    return 0;

}
