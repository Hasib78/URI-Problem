#include<stdio.h>
int main()
{
    int a,b,c=20,min,i,k=0;

    scanf("%d",&a);
    min=c;
    for(i=1; i<=a; i++)
    {


        scanf("%d",&b);
        if(b<=c && b<min)
        {
            min=b;
            k=i;

        }
    }
    printf("%d\n",k);



    return 0;
}
