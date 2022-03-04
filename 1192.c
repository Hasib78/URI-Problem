#include<stdio.h>
int main()
{
    int a,b,i,d,e,f;
    char c;
    scanf("%d",&d);
    for(i=0; i<d; i++)
    {
        scanf("%d %c %d",&a,&c,&b);
        if(a==b)
        {
            printf("%d\n",a*b);
        }
        else if(c>='A' && c<='Z')
        {
            f=b-a;
            printf("%d\n",f);
        }
        else if(c>='a' && c<='z')
        {
            e=a+b;
            printf("%d\n",e);
        }
    }
    return 0;

}
