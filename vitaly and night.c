#include<stdio.h>
int main()
{
    int n,m,i,j,k=0,count=0;
    scanf("%d",&n);
    scanf("%d",&m);
    int x=(2*m)*n;
    int a[x];
    for(i=0;i<n;i++)
    {
        for(j=0;j<(2*m);j++)
        {
            scanf("%d",&a[k]);
            k++;
        }
    }
    k--;
    for(i=0;i<(k);i+=2)
    {
        if((a[i]||a[i+1])>0)
            count++;
    }
    printf("%d",count);
}
