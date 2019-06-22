#include<stdio.h>
int main()
{
    long long int n;
    int k,w,b,i,p=0;
    scanf("%d",&k);
    scanf("%lld",&n);
    scanf("%d",&w);
    for(i=1;i<=w;i++)
    {
        p+=(i*k);
    }
    if(p>n)
    {
        b=(p-n);
        printf("%d",b);
    }
    else
        printf("%d",0);

}
