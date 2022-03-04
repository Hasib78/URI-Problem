#include<stdio.h>
int main()
{
    int i;
    char a[100];

    for(i=0;i<4;i++)
    {
        gets(a);
        if(a=='esquerda')
        {
            printf("ingles\n");
        }
        else if(a=='direita')
        {
            printf("frances\n");
        }

        else if(a=='nenhuma')
        {
            printf("portugues\n");
        }
        else if(a=='as duas')
        {
            printf(" caiu\n");
        }


    }
    return 0;
}
