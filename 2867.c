#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,i;
    scanf("%d",&d);
    for(i=0; i<d; i++)
    {

        scanf("%d%d",&a,&b);

        c=b*log10(a);

        printf("%d\n",c+1);

    }
}
