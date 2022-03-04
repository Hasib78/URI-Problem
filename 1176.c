#include<stdio.h>

int main()
{
    int a,i,n,j;
    long long int b[100];
    b[0]=0;
    b[1]=1;

    scanf("%d",&a);

    for(i=0; i<a; i++)
    {
        scanf("%d",&n);

        if(n==0)
        {
            printf("Fib(0) = %lld\n",b[n]);
        }

        else if(n==1)
        {
            printf("Fib(1) = %lld\n",b[n]);
        }
        else
        {

            for(j=2; j<=n; j++)
            {
                b[j]=b[j-1]+b[j-2];

            }

            printf("Fib(%d) = %lld\n",n,b[n]);

        }

    }
}
