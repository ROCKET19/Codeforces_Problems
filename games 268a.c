#include<stdio.h>
int main()
{
    int n,i,k,count=0;
    scanf("%d",&n);
    int a[n],b[n];
    k=n*(n-1);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
                count++;
        }
    }
    printf("%d",count);
}
