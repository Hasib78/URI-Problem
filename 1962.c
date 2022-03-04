#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    while(scanf("%d",&a)!=EOF)
    {

        for(i=0; i<a; i++)
        {
            scanf("%d",&b);
            if(b>=2015)
            {
                c=b-2014;
                printf("%d A.C.\n",c);
            }

            else if(b<2015)
            {
                d=2015-b;
                printf("%d D.C.\n",d);
            }
        }
    }
    return 0;

}
