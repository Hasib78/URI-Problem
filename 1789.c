#include<stdio.h>
int main()
{
    int a,b,i;
    while(scanf("%d",&a)==1)
    {
        int max=0;
        for(i=0; i<a; i++)
        {
            scanf("%d",&b);
            if(max<b)
            {
                max=b;
            }
        }
        if(max<10)
        {
            printf("1\n");
        }
        else if(max>=10 && max<20)
        {
            printf("2\n");
        }
        else if(max>=20)
        {
            printf("3\n");
        }
    }
}

