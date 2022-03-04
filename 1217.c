#include<stdio.h>
#include<string.h>

int main()
{
    double a,b,sum=0,d,s,e;
    int c=0,i,j;
    char x[10000];
    scanf("%lf",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%lf",&b);
        s=s+b;
        getchar();
        scanf("%[^\n]",x);

        for(j=0; x[j]!='\0'; j++)
        {
            if(x[j]==32)
            {
                c++;
            }
        }

        c=c+1;


        printf("day %d: %d kg\n",i,c);

        sum=sum+c;
        c=0;



    }
    d=sum/a;
    e=s/a;
    printf("%.2lf kg by day\n",d);
    printf("R$ %.2lf by day\n",e);

    return 0;


}
