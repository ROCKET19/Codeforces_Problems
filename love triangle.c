#include<stdio.h>
int main()
{
    int n,i,x,y,z,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
            scanf("%d",&a[i]);
    if(n>=3)
    {

        for(i=0;i<n;i++)
        {
            x=a[i];
            y=a[x];
            z=a[y];
            if(z==i)
                flag=1;
        }
        if(flag==0)
            printf("NO");
        else
            printf("YES");
    }
    else
        printf("NO");
}
