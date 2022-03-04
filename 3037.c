#include<stdio.h>
int main()
{
    int a,b,c,d,e=0,f=0,g,i,j;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        for(j=0; j<6; j++)
        {
            scanf("%d%d",&b,&c);
            d=b*c;
            if(j>=3 && j<6)
            {
                f=f+d;
            }
            else
            {
                e=e+d;
            }
        }
        if(e>f)
        {
            printf("JOAO\n");
        }
        else
        {
            printf("MARIA\n");
        }
        f=0,e=0;
    }

}
