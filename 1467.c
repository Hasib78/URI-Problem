#include<stdio.h>
int main()
{
    int a,b,c,i;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(a==b && b!=c)
        {
            printf("C\n");
        }
        else if(a==c && a!=b)
        {
            printf("B\n");
        }
        else if(b==c && c!=a)
        {
            printf("A\n");
        }
        else
        {
            printf("*\n");
        }
    }
    return 0;
}
