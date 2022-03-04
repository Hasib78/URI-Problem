#include<stdio.h>
#include<stdlib.h>

void media(double a,double c, double avg)
{
    double sum=0,count=0;

    while(1)
    {
        scanf("%lf",&c);
        printf("novo calculo (1-sim 2-nao)\n");
        if(c==1)
        {

            while(1)
            {
                scanf("%lf",&a);


                if(a>=0 && a<=10)
                {
                    sum=sum+a;
                    count++;
                    if(count==2)
                    {
                        avg=sum/2;
                        printf("media = %.2lf\n",avg);
                        break;


                    }


                }

                else
                {
                    printf("nota invalida\n");

                }
            }
        }
        else if(c==2)

            exit(0);

        else
        {
            continue;
        }
    }
}


int main()
{
    double a,c,sum=0,count=0,avg;
    while(1)
    {
        scanf("%lf",&a);


        if(a>=0 && a<=10)
        {
            sum=sum+a;
            count++;
            if(count==2)
            {
                avg=sum/2;
                printf("media = %.2lf\n",avg);
                sum=0,count=0;
                media(a,c,avg);


            }


        }

        else
        {
            printf("nota invalida\n");

        }
    }

}
