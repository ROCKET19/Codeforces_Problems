#include<stdio.h>
int main()
{
    unsigned long long int n,x;
    scanf("%llu",&n);
    if(n==0)
        printf("%d",n);
    else
    {

    if((n+1)%2==0)
    {
        x=(n+1)/2;
        printf("%llu\n",x);
    }
    else
        printf("%llu\n",n+1);
    }
}
