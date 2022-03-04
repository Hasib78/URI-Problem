#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,k,l,m,n,p,q,r,s,t,u,x,y,z,i,j;
    scanf("%*s%d",&a);
    scanf("%d%*s",&b);
    scanf("%d%*s",&c);
    scanf("%d",&d);
    scanf("%*s%d",&e);
    scanf("%d%*s",&f);
    scanf("%d%*s",&g);
    scanf("%d",&h);
    x=a*24*3600;
    y=b*3600;
    i=c*60;
    z=x+y+i+d;
    k=e*24*3600;
    l=f*3600;
    j=g*60;
    m=k+l+j+h;
    n=m-z;
    p=n/86400;
    q=n%86400;
    r=q/3600;
    s=q%3600;
    t=s/60;
    u=s%60;

    printf("%d dia(s)\n",p);
    printf("%d hora(s)\n",r);
    printf("%d minuto(s)\n",t);
    printf("%d segundo(s)\n",u);

    return 0;
}
