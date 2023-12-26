#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("acilari sirasi ile gir\n");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b+c)==180)
    {
        if((a==b)&&(a==c))
        {
            printf("eskenar");
        }
        else if ((a==b)&&(a!=c))
        {
            printf("ikizkenar");
        }
        else if ((a==c)&&(a!=b))
        {
            printf("ikizkenar");
        }
        else if ((b==c)&&(b!=a))
        {
            printf("ikizkenar");
        }
        else
        {
            printf("cesitkenar");
        }

    }
    else
        {
            printf("ucgen degil");
        }
    return 0;
}
