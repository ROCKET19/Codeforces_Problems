#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int k,n=0;
    int b,j=0;
    scanf("%d",&b);
    scanf("%u",&k);
    int a[k+2];
    if(k>=2)
    {

        for(int i=1;i<=k;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=k;i>=0;i--)
        {
            n+=a[j]*pow(b,i);
            j++;
        }
    }
    else
        scanf("%d",&a[0]);
        n+=a[0]*1;
    if(n%2==0)
        printf("even");
    else
        printf("odd");

}
