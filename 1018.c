#include<stdio.h>

int main()
{
    int a,i;
    int ara[7]={100,50,20,10,5,2,1};
    int bra[7];

    scanf("%d",&a);

    printf("%d\n",a);

    for(i=0;i<7;i++)
    {
       bra[i] =a/ara[i];

       a =a % ara[i];

       printf("%d nota(s) de R$ %d,00\n",bra[i],ara[i]);
    }
    return 0;


}
