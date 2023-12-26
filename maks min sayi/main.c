#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int max=0,min=0;
    printf("uc adet sayi giriniz\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
        max=a;
    else if (b>c && b>a)
        max=b;
    else
        max=c;
    printf("max: %d\n",max);
    if (a<b && a<c)
        min=a;
    else if (b<c && b<a)
        min=b;
    else
        min=c;
    printf("min: %d",min);

    return 0;
}
