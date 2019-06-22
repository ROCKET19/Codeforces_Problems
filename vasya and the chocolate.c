#include<stdio.h>
int main()
{
    long long a,b,s,c,y,z,r,m,n;
    unsigned long long int x[99];
    int t,i=0,j;
    scanf("%d",&t);
    if((t>=1)&&(t<=100))
    {
        while(t>0)
        {
            scanf("%lli%lli%lli%lli",&s,&a,&b,&c);
		r=a*c;
		y=s/c;
		z=(y/a)*b;
		x[i]=y+z;

            t--;
            i++;
        }
        i--;
        j=i;
        for(i=0;i<=j;i++)
            printf("%llu\n",x[i]);
    }
}
