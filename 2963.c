#include<stdio.h>
int main()
{
    int a,b,c,d,i,max;
    scanf("%d",&a);

    scanf("%d",&b);
    max=b;

    for(i=0;i<a-1;i++)
    {
        scanf("%d",&c);
        if(max<c)
        {
            max=c;
        }

    }
    if(max==b)
    {
        printf("S\n");
    }
    else{
        printf("N\n");
    }

    return 0;


}
