#include<stdio.h>
int main()
{
    int n,m,i,j,k=1;
    scanf("%d%d",&n,&m);
    char a[n][m+1];
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        for(j=0;j<m;j++)
        {
            printf("#");
        }
        else
            for(j=0;j<m;j++)
        {
            if(k%4==0)
            {
                if(j==m-1)
                printf("#");
            else
                printf(".");
            }
            else
            {
                if(j==0)
                    printf(".");
                else
                    printf("#");
            }
        }
    printf("\n");
    k++;
    }
}
