#include<stdio.h>
int main()
{
    unsigned int n,k=1,i,x=1;
    scanf("%u",&n);
    for(i=2;i<=n+1;i++)
    {
        for(int j=2;j<i;j++)
        {if(i%j==0)
            printf("%u ",++k);
        else
            printf("%u ",k);
            x++;}
    }
}
