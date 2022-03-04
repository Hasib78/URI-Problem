#include<stdio.h>
int main()
{

    int i,count=0,j;
    j=500;
    char t[j];

    scanf("%[^\n]",t);
    i=0;
    while(t[i]!='\0')
    {
        count++;
        i++;
        if(count>140)
        {

            break;
        }

    }
    if(count<=140)
    {
        printf("TWEET\n");
    }
    else
    {
        printf("MUTE\n");
    }

    return 0;

}
