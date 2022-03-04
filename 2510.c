#include<stdio.h>
int main()
{
    char ar[25],Jokoder;
    int a,i;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%s",&ar);
        if(ar[25]=='Jokoder')
        {
            printf("N\n");
        }
        else
        {
            printf("Y\n");
        }
    }
    return 0;
}
