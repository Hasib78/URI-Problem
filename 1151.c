#include<stdio.h>

int main()
{
    int count=2,first=0,second=1,a,fibon;

    scanf("%d",&a);
    printf("%d ",first);
    printf("%d",second);

    while(count<a)
    {
            fibon=first + second;
            printf(" %d",fibon);

            first=second;
            second=fibon;

        count++;

    }
    printf("\n");
    return 0;
}
