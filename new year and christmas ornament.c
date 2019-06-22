#include<stdio.h>
int main()
{
	int a,b,c,f=0;
	scanf("%d%d%d",&a,&b,&c);
	if((a+1<=b)&&(a+2<=c))

		f=a+a+1+a+2;

	else if((b<=a)&&(b+1<=c))

		f=b+b-1+b+1;

	else

		f=c+c-1+c-2;
	printf("%d",f);
}
