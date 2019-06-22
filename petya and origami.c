#include<stdio.h>
int main()
{
    unsigned long long n,k;
    scanf("%llu",&n);
    scanf("%llu",&k);
    int count,b,r,g;
    b=((8*n)/k);
    if(((8*n)%k)!=0)
        b++;

    r=((2*n)/k);
    if(((2*n)%k)!=0)
         r++;

    g=((5*n)/k);
    if(((5*n)%k)!=0)
        g++;
    count=b+r+g;
    printf("%d",count);
}
