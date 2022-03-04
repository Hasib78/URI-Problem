#include<stdio.h>
int main()
{
    int a,b,c,i,d,e;
    while(scanf("%d%d",&a,&b)==2)
    {

        if(a>=0 && b>0)
        {
            i=0,c=0;

            while(a-c>=b)
            {

                c=c+b;
                i++;
            }
            d=a-c;
            printf("%d %d\n",i,d);
        }

        else if(a>=0 && b<0)
        {
            c=0,i=2;
            while(a+c>=b)
            {
                c=c+b;
                i--;
            }
            d=a%b;
            printf("%d %d\n",i,d);

        }
        else if(a<=0 && b>0)
        {
            c=0,i=-1;
            while(a+c<= -b)
            {
                if((a+c)== -b)
                {

                    break;
                }
                else
                {
                    c=c+b;
                    i--;
                }
            }
            if((a+c)== -b)
            {
                d=a%b;
                printf("%d %d\n",i,d);
            }
            else
            {
                d=c+b;
                e=d+a;
                printf("%d %d\n",i,e);
            }

        }
        else if(a<=0 && b<0)
        {
            c=0,i=1;
            while(a-c<= b)
            {
                if((a-c)==b)
                {
                    break;
                }
                else
                {

                    c=c+b;
                    i++;
                }
            }
            if((a-c)==b)
            {
                d=a%b;
                printf("%d %d\n",i,d);
            }
            else
            {
                d=c+b;
                e=-d+a;
                printf("%d %d\n",i,e);

            }
        }
    }


    return 0;


}
