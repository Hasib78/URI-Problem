#include<stdio.h>
int main()
{
    int a,a1,b,b1,i,c,d,e,f,g;
    while(scanf("%d %d %d %d",&a,&a1,&b,&b1)!=EOF)
    {
        if(a==0 && a1==0 && b==0 && b1==0)
        {
            break;
        }
        else
        {

            c=(a*60)+a1;
            d=(b*60)+b1;
            if(d>=c)
            {
                e=d-c;
                printf("%d\n",e);
            }
            else
            {
                f=d+(24*60);
                g=f-c;
                printf("%d\n",g);
            }
        }

    }
}
