#include<stdio.h>
int main()
{
    int a,i,m=0,f=0;
    char j[100];
    char g;
    char temp;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%*s");
        scanf("%c",&temp);
        scanf("%c",&g);

        if(g=='M')
        {
            m++;
        }
        else if(g=='F')
        {
            f++;
        }


    }
    printf("%d carrinhos\n",m);
    printf("%d bonecas\n",f);

    return 0;
}
