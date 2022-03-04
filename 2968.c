#include<stdio.h>
int main()
{

    int x=10,n,y;
    double a,b,c,d,e,i,z;

    scanf("%lf%lf",&a,&b);
    for(i=0; i<9; i++)
    {
        c=a*b;
        d=c*x/100;
        y=c*x/100;
        z=d-y;

        if(i==8)
        {
            if(z==0)
            {


                printf("%d\n",y);

            }
            else
            {

                printf("%d\n",y+1);
            }
        }

        else
        {
            if(z==0)
            {


                printf("%d ",y);

            }
            else
            {

                printf("%d ",y+1);
            }
        }


        x=x+10;



    }

}
