#include<stdio.h>
#include<string.h>
int main(){
int i,n,c1=0,c2=0;
char ch;
scanf("%d",&n);
for(i=1;i<=n*2;i++)
{
    scanf("%*s");
    scanf("%c",&ch);
    if(ch=='M')
    {
        c1++;
    }
  else if(ch=='F')
    {
        c2++;
    }
}
printf("%d carrinhos\n",c1);
printf("%d bonecas\n",c2);
return 0;
}
