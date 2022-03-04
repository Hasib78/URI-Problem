#include<stdio.h>
int main()
{
    double a,b,c,i,j,k,g,e,f;
    double s=0,bl=0,at=0,s1=0,bl1=0,at1=0;
    char d[10];
    scanf("%lf",&a);
    for(i=0;i<a;i++)
    {
        scanf("%s",d);
        for(j=0;j<3;j++)
        {
            scanf("%lf",&b);
            if(j==0)
            {
               s=s+b;
            }
            else if(j==1)
            {
               bl=bl+b;
            }
           else if(j==2)
            {
               at=at+b;
            }

        }
        for(k=0;k<3;k++)
        {
            scanf("%lf",&c);
            if(k==0)
            {
                s1=s1+c;
            }
           else if(k==1)
            {
                bl1=bl1+c;
            }
            else if(k==2)
            {
                at1=at1+c;
            }

        }



    }
    g=(s1/s)*100;
    e=(bl1/bl)*100;
    f=(at1/at)*100;
    printf("Pontos de Saque: %.2lf %%.\n",g);
    printf("Pontos de Bloqueio: %.2lf %%.\n",e);
    printf("Pontos de Ataque: %.2lf %%.\n",f);

    return 0;
}
