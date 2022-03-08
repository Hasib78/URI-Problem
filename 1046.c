#include<stdio.h>

int main()
{
    int a,b,x;

    scanf("%d%d",&a,&b);

    if(b>a)
    {
        x=b-a;


    }
       if(a>b || a==b)
    {
        x=(24-a)+b;

    }


    if(x>0 && x<=24){

    printf("O JOGO DUROU %d HORA(S)\n",x);
    }

    return 0;

}
