#include<stdio.h>

int main()
{
    int x,y,i,j,z=1,c,o,l;

    scanf("%d %d",&x,&y);

    c=y/x;
    l=x;

    for(i=1;i<=c;i++)
    {
        printf("%d",z);
        for(j=z+1;j<=l;j++)
        {
            printf(" %d",j);

        }
            printf("\n");

            z=z+x;
            l=l+x;
    }

    return 0;
}
