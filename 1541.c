#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,c,d,e;
    for(;;)
    {
        scanf("%d",&a);
        if(a==0)

            break;

        else
        {
            scanf("%d %d",&b,&c);
            d= a*b*100/c;
            e=sqrt(d);
            printf("%d\n",e);
        }
    }


}
