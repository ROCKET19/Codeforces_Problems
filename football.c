#include<stdio.h>
int main()
{
    char a[101];
    scanf("%s",a);
    int i=0,one=0,zero=0,flag=0;
    while(a[i]!='\0')
    {
        if(a[i]=='1')
            {
                one++;
                zero=0;
            }
         else
         {
             zero++;
             one=0;
         }
         if(one>=7||zero>=7)
            flag=1;
            i++;
    }
         if(flag==1)
            printf("YES");
         else
            printf("NO");
}
