#include<stdio.h>
int main()
{
    int a,b,i,m=0,j=0;
    while(scanf("%d",&a)!=EOF)
    {
        if(a==0)
        {
            break;
        }
        else
        {
            for(i=0; i<a; i++)
            {
                scanf("%d",&b);
                if(b==0)
                {
                    m++;
                }
                else if(b==1)
                {
                    j++;
                }

            }
        }

        printf("Mary won %d times and John won %d times\n",m,j);

        m=0,j=0;

    }
}
