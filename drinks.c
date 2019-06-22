#include<stdio.h>
int main()
{
    int n;                      //number of drinks
    scanf("%d",&n);
    int a[n-1];                 //for i(th) drink volume
    float r;
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        r+=a[i];
    }
    printf("%f",r/n);
}
