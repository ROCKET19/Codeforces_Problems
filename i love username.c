#include<stdio.h>
int main()
{
    int n,count=0,l,s;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a[0]);
    l=s=a[0];
    for(int i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        for(int j=0;j<i;j++)
        if(a[j]>l)
            l=a[j];
        else if(a[j]<s)
            s=a[j];
        if(a[i]>l||a[i]<s)
            count++;
    }
    printf("%d",count);
}
