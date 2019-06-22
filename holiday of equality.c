#include<stdio.h>
int main()
{
    int n,i,l,s,x,y=0;
    scanf("%d",&n);
    long long int a[n];
    scanf("%d",&a[0]);
    l=s=a[0];
    for(i=1;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]>l)
            l=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==l)
            continue;
        else
            {
                x=l-a[i];
                a[i]+=x;
                y+=x;
            }
    }
    printf("%d",y);
}
