#include<stdio.h>
int main()
{
    int a,b,c,i,m,s=0,count=0,less=0;
    while(scanf("%d%d",&a,&b)!=EOF)
    {

        for(i=0; i<b; i++)
        {
            scanf("%d",&c);
            m=c-s;
            s=c;
            if(i>0)
            {

                if(m>a)
                {
                    count++;
                }
                else if(m<-a)
                {
                    less++;
                }

            }

        }
        if(count>0 || less>0)
        {
            printf("GAME OVER\n");
        }
        else
        {
            printf("YOU WIN\n");
        }
    }
    return 0;

}
