#include<stdio.h>

int main()
{
    int i,a,highest=0,position=0;

    for(i=1;i<=100;i++)
    {
        scanf("%d",&a);

        if(a>highest)
        {
            highest = a;

            position =i;

        }


    }
    printf("%d\n",highest);

    printf("%d\n",position);

    return 0;
}
