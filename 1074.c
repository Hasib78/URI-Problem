#include<stdio.h>

int main()
{
    int a,ara[10000],i;

    scanf("%d",&a);

    for(i=0; i<a; i++)
    {
        scanf("%d",&ara[i]);

        if(ara[i]>0)
        {
            if(ara[i]%2==0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
        else if(ara[i]<0)
        {
            if(ara[i]%2==0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }

        else if(ara[i]== 0)
        {

            printf("NULL\n");
        }
    }
    return 0;
}
