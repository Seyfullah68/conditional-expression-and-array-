#include <stdio.h>
#include <stdlib.h>
#define mil 1.607
#define cevir(km) (km*mil)
int main()
{
    float hiz;
    printf("hizi gir\n");
    scanf("%f",&hiz);
    printf("%.2f",cevir(hiz));
    return 0;
}
