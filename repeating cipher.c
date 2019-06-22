#include<stdio.h>
int main()
{
    int n,k=0,j=1;;
    scanf("%d",&n);
    char a[n];
    for(int i=0;i<n;i++)
    {
        scanf(" %c",&a[i]);
    }
    for(int i=0;k<n;i++)
    {
        printf("%c",a[k]);
        k+=j;
        j++;
    }
}
