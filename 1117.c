#include<stdio.h>

int main()
{
    double a,b,media,c=0,count=0;

    while(1)
    {
        scanf("%lf",&a);

        if(a<0 || a>10)
        {
            printf("nota invalida\n");
        }


        if(a>=0 && a<11)
        {
            c=c+a;
            count++;
        }
        if(count==2)
            break;


    }
    media=c/2;
    printf("media = %.2lf\n",media);


    return 0;
}
