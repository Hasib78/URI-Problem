#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,d=0,e=0,h=0,m=0,x=0;
    char b;
    char c[10];

    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        scanf("%s ",c);

        scanf("%c",&b);

        if(b=='X')
        {
            x++;
        }
        else if(b=='M')
        {
            m++;
        }
        else if(b=='H')
        {
            h++;
        }
        else if(b=='E')
        {
            e++;
        }
        else if(b=='A')
        {
            d++;
        }
    }

    printf("%d Hobbit(s)\n",x);
    printf("%d Humano(s)\n",h);
    printf("%d Elfo(s)\n",e);
    printf("%d Anao(s)\n",d);
    printf("%d Mago(s)\n",m);


}
