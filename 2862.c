#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b<=8000)
        {
            printf("Inseto!\n");
        }
        else{

            printf("Mais de 8000!\n");
        }
    }
    return 0;
}
