#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,i,j,k=0,l;
    int e[100];
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&b);
        scanf("%d",&c);
        if(b<c)
        {
            for(j=1; j<=b; j++)
            {
                d=b/j;
                for( ; ; )
                {
                   e[k]=d;
                }
                k++;
            }


        }

        for(k=0; k<b; k++)
        {
            printf("%d\n",e[k]);
        }
    }
}
