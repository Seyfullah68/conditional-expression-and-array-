#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x=1;
    printf("sayi gir\n");
    scanf("%d",&n);
    float toplam=0;

    do
    {
        toplam+=(float)1/x;
        x++;
    }
    while (x<=n);
    printf("%f",toplam);
    return 0;
}
