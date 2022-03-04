#include<stdio.h>
int main()
{
    unsigned int a,b;
    while(scanf("%lu%lu",&a,&b)!=EOF)
    {

        printf("%lu\n",a^b);

    }
    return 0;
}
