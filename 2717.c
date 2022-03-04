#include<stdio.h>
int main()
{
    int a,b,c,d;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    d=b+c;
    if(d<=a)
    {
        printf("Farei hoje!\n");
    }
    else
    {
        printf("Deixa para amanha!\n");
    }


    return 0;
}
