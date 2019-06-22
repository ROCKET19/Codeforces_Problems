#include<stdio.h>
int main()
{
    int n,a,b,i,m,s=0;
    scanf("%d",&n);
    int d[n-1];
    for(i=0;i<n-1;i++)
    {
        scanf("%d ",&d[i]);
    }
    scanf("%d %d",&a,&b);
    m=b-a;
    for(i=a;i<b;i++)
        s+=d[i-1];
    printf("%d",s);
}
