#include<stdio.h>
int main()
{
    int a,a1,b,b1;
    while(scanf("%d %d %d %d",&a,&a1,&b,&b1)!=EOF)
    {
        if(a==0 && a1==0 && b==0 && b1==0)
        {
            break;
        }
        else
        {

            if(a==b && a1==b1 )
            {
                printf("0\n");
            }
            else if(a==b || a1==b1)
            {
                printf("1\n");
            }
            else if(a==a1 && b==b1)
            {
                printf("1\n");
            }
            else if((a-b)+(a1-b1)==0)
            {
                printf("1\n");
            }
            else if((a-b)==(a1-b1))
            {
                printf("1\n");
            }

            else
            {
                printf("2\n");
            }
        }
    }
    return 0;
}
