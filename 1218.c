#include<stdio.h>
int main()
{
    int a,b,c=0,i=0,j,f=0,m=0;
    char e,y;
    while(scanf("%d",&a)!=EOF)
    {
        if(i!=0)
            {
                printf("\n");
            }
        while(scanf("%d %c%c",&b,&e,&y)==3)
        {

            if(b==a)
            {
                c++;

                if(e=='M')
                {

                    m++;
                }

                else if(e=='F')
                {
                    f++;
                }
            }
            if(y=='\n')
            {
                break;
            }
        }
        i++;
        printf("Caso %d:\n",i);
        printf("Pares Iguais: %d\n",c);
        printf("F: %d\n",f);
        printf("M: %d\n",m);
        f=0,m=0,c=0;

    }
    return 0;

}
