#include<stdio.h>
int main()
{
    char a[600];
    int i,count=0;
    scanf("%[^\n]",a);
    i=0;
    while(a[i]!='\0')
    {
       count++;
       i++;
    }
    if(count>80)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}
