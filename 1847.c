#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(a>b && c>=b)
        {
            printf(":)\n");
        }
        else if(a<b && c<=b)
        {
            printf(":(\n");
        }
        else if(a<b && b<c && (b-a)>(c-b))
        {
            printf(":(\n");
        }
        else if(a<b && b<c && (b-a)<=(c-b))
        {
            printf(":)\n");
        }
        else if(a>b && b>c && (a-b)>(b-c))
        {
            printf(":)\n");
        }
        else if(a>b && b>c && (a-b)<=(b-c))
        {
            printf(":(\n");
        }

        else if(a==b && b<c)
        {
            printf(":)\n");

        }
        else if(a==b && b>=c)
        {
            printf(":(\n");
        }

    }
    return 0;

}
