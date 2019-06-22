#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
                printf("%d ",a[i]);
        }
    }
}
