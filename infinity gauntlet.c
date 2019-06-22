#include<stdio.h>
#include<string.h>
int main()
{
    int n,r1=0,s1=0,t1=0,m1=0,sp1=0,p1=0,x;
    scanf("%d",&n);
    x=6-n;
    char r[8]="Reality",s[5]="Soul",t[5]="Time",m[5]="Mind",sp[6]="Space",p[6]="Power",c[n+1][8];
    for(int i=0;i<n;i++)
    {
        scanf(" %s",c);
        if(strcmp(c,"red")==0)
            r1++;
        else if(strcmp(c,"orange")==0)
            s1++;
        else if(strcmp(c,"green")==0)
            t1++;
        else if(strcmp(c,"yellow")==0)
            m1++;
        else if(strcmp(c,"blue")==0)
            sp1++;
        else if(strcmp(c,"purple")==0)
            p1++;
    }
    printf("%d\n",x);
    if(!r1)
        printf("%s\n",r);
    if(!s1)
        printf("%s\n",s);
    if(!t1)
        printf("%s\n",t);
    if(!m1)
        printf("%s\n",m);
    if(!sp1)
        printf("%s\n",sp);
    if(!p1)
        printf("%s\n",p);

}
