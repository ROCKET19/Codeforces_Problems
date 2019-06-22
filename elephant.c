#include<stdio.h>
int main()
{
    int x,s,r;
    scanf("%d",&x);
    if(x<5)
	r=1;
    else
    {
    r=x/5;
    if(x%5!=0)
        r++;
    }
    printf("%d",r);
}
