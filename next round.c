#include<stdio.h>
int main()
{
    int k,n,i,count=0,v;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
    v=a[k-1];
    while(a[i]>=v&&a[i]>0&&i<n)
    {
        count++;
        i++;
    }
    printf("%d",count);
}
