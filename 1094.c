#include<stdio.h>
int main()
{
    int n,a,x=0,y=0,z=0,total,i;
    double pa,pb,pc;
    char k;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %c",&a,&k);
        if(k=='C')
        {
            x=x+a;
        }
         else if(k=='R')
        {
            y=y+a;
        }
         else if(k=='S')
        {
            z=z+a;
        }
    }
    total=x+y+z;
    pa=(x*100.00)/total;
    pb=(y*100.00)/total;
    pc=(z*100.00)/total;

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",x);
    printf("Total de ratos: %d\n",y);
    printf("Total de sapos: %d\n",z);
    printf("Percentual de coelhos: %.2lf %%\n",pa);
    printf("Percentual de ratos: %.2lf %%\n",pb);
    printf("Percentual de sapos: %.2lf %%\n",pc);

    return 0;
}
