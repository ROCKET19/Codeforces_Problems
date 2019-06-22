#include<stdio.h>
int main()
{
    char a[101],b[101],c[101];

    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);

    int i=0,v1=0,v2=0,v3=0;

    while(a[i]!='\0')
    {
        switch(a[i])
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                        v1++;
            default: break;

        }
        i++;
    }
    i=0;
    while(b[i]!='\0')
    {
        switch(b[i])
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                        v2++;
            default: break;

        }
        i++;
    }
    i=0;
    while(c[i]!='\0')
    {
        switch(c[i])
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                        v3++;
            default: break;

        }
        i++;
    }
    if(v1==5&&v2==7&&v3==5)
        printf("YES");
    else
        printf("NO");
}
