#include<stdio.h>
int main()
{
    int a,b,c,i,j,sum=0;

    scanf("%d",&a);

    for(i=0; i<a; i++)
    {
        scanf("%d",&b);

        for(j=1; j<=b/2; j++)
        {
            c=b%j;

            if(c==0)
            {
                sum=sum+j;
            }
        }
        if(sum==b)
        {
            printf("%d eh perfeito\n",b);
        }
        else
        {
            printf("%d nao eh perfeito\n",b);
        }
        sum=0;
    }
    return 0;
}
