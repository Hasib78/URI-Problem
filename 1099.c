#include<stdio.h>
int main()
{
    int t,a,b,i,j,sum=0,temp;

    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(a%2==0)

           a--;
           a+=2;



        for(j=a; j<b; j+=2)
        {

            sum=sum+j;
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}
