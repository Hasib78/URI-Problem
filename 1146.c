#include<stdio.h>

int main()
{
    int a,i=1,j;
    while(1)
    {

        scanf("%d",&a);
        if(a==0)
            break;

        printf("%d",i);

        for(j=2; j<=a; j++)
        {
            printf(" %d",j);

        }
        printf("\n");

    }
    return 0;

}
