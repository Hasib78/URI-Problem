#include<stdio.h>

int main()
{
    int a,i,count =0;

    scanf("%d",&a);

    for(i=a; i<=100; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
            count++;

        }
         if(count==6)
        {
            break;
        }


    }
    return 0;
}
