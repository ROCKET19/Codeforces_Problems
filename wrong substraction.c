#include<stdio.h>
int main()
{
    int k,r,x=0;
    unsigned long long n;
    scanf("%llu",&n);
    scanf("%d",&k);
    r=n;
    while(k>0)
    {
        x=r%10;
    if(x==0)
    {
        r=r/10;
        k--;
    }
    else
       {
        r--;
        k--;
        }
    }

printf("%d",r);
}
