#include<stdio.h>
int main()
{
    int a,b,c,gr=0,draw=0,al=0,bl=0;

    while(1)
    {



        scanf("%d",&a);
        scanf("%d",&b);
        printf("Novo grenal (1-sim 2-nao)\n");



        gr++;
        if(a==b)
        {
            draw++;
        }
        else if(a>b)
        {
            al++;
        }
        else if(a<b)
        {
            bl++;
        }
        scanf("%d",&c);

        if(c==1)
        {

            continue;
        }


        else
        {
            break;
        }
    }
    printf("%d grenais\n",gr);
    printf("Inter:%d\n",al);
    printf("Gremio:%d\n",bl);
    printf("Empates:%d\n",draw);
    if(al>bl)
    {
        printf("Inter venceu mais\n");
    }
    else if(al<bl)
    {
        printf("Gremio venceu mais\n");
    }
    else
    {
        printf("Não houve vencedor\n");
    }



}
