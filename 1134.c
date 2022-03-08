#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a,alcool=0,gasoline=0,diesel=0;
    while(1)
    {

        scanf("%d",&a);

        if(a==1)
        {
            alcool++;
        }
        else if(a== 2)
        {
            gasoline++;
        }

        else if(a==3)
        {
            diesel++;
        }

        else if(a==4)
        {
            break;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcool);
    printf("Gasolina: %d\n",gasoline);
    printf("Diesel: %d\n",diesel);

}
