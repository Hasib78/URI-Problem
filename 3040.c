#include<stdio.h>
int main()
{
    int a,h,d,b,i;
    scanf("%d",&a);

    for(i=0; i<a; i++)
    {
        scanf("%d%d%d",&h,&d,&b);

        if(h>=200 && h<=300)
        {
            if(d>=50)
            {
                if(b>=150)
                {
                    printf("Sim\n");
                }
                else
                {
                    printf("Nao\n");
                }
            }
            else
            {
                printf("Nao\n");
            }

        }
        else
        {
            printf("Nao\n");
        }
    }
}
