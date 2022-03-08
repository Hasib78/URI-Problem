#include<stdio.h>
int main()
{
     char a[15];
     char b[15];
     char c[15];

    gets(a);
    gets(b);
    gets(c);


    if( a==vertebrado && b==ave && c==carnivoro)
    {
        printf("aguia\n");
    }
    else if(a==vertebrado && b==ave && c== onivoro)
    {
        printf("pomba\n");
    }
    else if(a==vertebrado && b==mamifero && c==onivoro)
    {
        printf("homem\n");

    }
    else if(a==vertebrado && b==mamifero && c==herbivora)
    {
        printf("vaca\n");
    }
    else if(a==invertibrado && b==inseto && c==hematofago);
    {
        printf("pulga\n");
    }
    else if(a==invertibrado && b==inseto && c==herbivora)
    {
        printf("lagarta\n");
    }
    else if(a==invertibrado && b==anelideo && c==hematofago)
    {
        printf("sanguessuga\n");
    }
    else if(a==invertibrado && b==anelideo && c==onivoroc )
    {
        printf("minhoca\n");
    }

    return 0;


}

