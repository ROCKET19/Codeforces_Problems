#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    char a[n];
    for(i=0;i<n;i++)
    {
        scanf(" %s",a);
        if(strcmp(a,"X++")==0||strcmp(a,"++X")==0)
            x++;
        else
            x--;
    }
    printf("%d",x);
}
