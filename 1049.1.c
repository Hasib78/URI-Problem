#include<stdio.h>
#include<string.h>

int main()
{
     char a[15];
     char b[15];
     char c[15];


    gets(a);
    gets(b);
    gets(c);


    if( a[0]=='v' && b[0]=='a' && c[0]=='c')
    {
        printf("aguia\n");
    }
    else if(a[0]=='v' && b[0]=='a' && c[0]== 'o')
    {
         printf("pomba\n");
    }
    else if(a[0]=='v' && b[0]=='m' && c[0]=='o')
    {
         printf("homem\n");

    }
    else if(a[0]=='v' && b[0]=='m' && c[0]=='h')
    {
         printf("vaca\n");
    }
    else if(a[0]=='i' && b[0]=='i' && c[2]=='m')
    {
         printf("pulga\n");
    }
    else if(a[0]=='i' && b[0]=='i' && c[2]=='r')
    {
         printf("lagarta\n");
    }
    else if(a[0]=='i' && b[0]=='a' && c[2]=='m')
    {
         printf("sanguessuga\n");
    }
    else if(a[0]=='i' && b[0]=='a' && c[0]=='o')
    {
        printf("minhoca\n");
    }

    return 0;


}

