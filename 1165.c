#include<stdio.h>

int main()
{
    int n,a,c,b=2,i,e;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a);
        e=a/2;

        while(b<=e)
        {
            c=a%b;


            if(c==0)
            {
                printf("%d nao eh primo\n",a);
                break;

            }
            b=b+1;
        }
        if(c!=0)
        {
            printf("%d eh primo\n",a);

        }
        b=2;

    }
    return 0;
}
