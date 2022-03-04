#include<stdio.h>
int main()
{
    int a,c,i,d,e;
    while(scanf("%d",&a)!=EOF)
    {
        if(a==0)
        {
            break;
        }

        else
        {

            for(i=0; i<a; i++)
            {


                scanf("%d",&d);
                if(d%2==0)
                {

                    e=(d*2)-2;
                    printf("%d\n",e);
                }

                else
                {

                    c=(d*2)-1;
                    printf("%d\n",c);
                }
            }

        }
    }
}
