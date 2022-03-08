#include<stdio.h>
int main()
{
    int x,y,z,temp,a,b,c;

    scanf("%d%d%d",&x,&y,&z);

    a= x;

    b = y;

    c = z;


    if(x>y)
    {
       temp = x,x = y,y = temp;
    }
    if(x>z)
    {
        temp = x;x = z,z = temp;
    }
    if(y>z)
    {
        temp = y,y = z,z = temp;
    }

    printf("%d\n%d\n%d\n",x,y,z);

    printf("\n");

    printf("%d\n%d\n%d\n",a,b,c);

    return 0;
}
