#include<stdio.h>
int main()
{
    int n,x,a,b,c;
    scanf("%d%d%d%d",&a,&b,&c,&n);
    if(n>(a+b-c)&&(c<=a)&&(c<=b))
    {
        x=n-(a+b-c);
        if(x<0)
        printf("%d",-x);
        else
            printf("%d",x);
    }
    else
        printf("-1");
}
