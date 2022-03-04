#include<stdio.h>
int main()
{
    int b,c,d,e,i;
    char a;

    while(scanf("%d%c%d",&b,&a,&c)!=EOF)
    {

        d=(b*60)+c+60;
        if(d>480)
        {
            e=d-480;
            printf("Atraso maximo: %d\n",e);
        }
        else if(d<=480)
        {
            printf("Atraso maximo: 0\n");
        }
    }


    return 0;

}
