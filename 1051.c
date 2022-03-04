#include<stdio.h>

int main()
{
    float a,b,c,d,e,f,g,i,j,x,y,z;

    scanf("%f",&a);

    if(a<=2000)
    {
        printf("Isento\n");
    }
    else if(a>2000)
    {

        b=a-2000;
        if(b<=2500 && b>1000)
        {
            c=b-1000;
            d=c*18/100;
            e=1000*8/100;
            x=d+e;
            printf("R$ %.2f\n",x);
        }
        else if(b<=1000)
        {
            z=b*8/100;
            printf("R$ %.2f\n",z);
        }
        else if(b>2500)
        {
            f=b-2500;
            g=1000*8/100;
            i=f*28/100;
            j=1500*18/100;
            y=g+i+j;
            printf("R$ %.2f\n",y);
        }
    }
}
