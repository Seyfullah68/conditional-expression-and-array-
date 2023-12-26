#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,h;
    int talan,yalan,topalan,hacim;
    printf("taban uzunluklar ve yuksekligi giriniz\n");
    scanf("%d%d%d",&a,&b,&h);
    talan=a*b;
    yalan= 2*a*h+2*b*h;
    topalan=2*talan+yalan;
    hacim=a*b*h;
    printf("%d  %d  %d  %d",talan,yalan,topalan,hacim);

    return 0;
}
