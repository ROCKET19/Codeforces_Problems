#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        printf("I hate ");
        if(i%2==0)
            printf("I love ");
            if(i==n)
                continue;
            else
            printf("that ");

    }
    printf("it");
}
