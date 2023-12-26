#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void fonk(float *a ,float *sonuc)
{
    *sonuc = pow(*a,3)+13*pow(*a,2)+47**a+5;
}
int main()
{
    float x,y;
    printf("sayi giriniz\n");
    scanf("%f",&x);
    fonk(&x,&y);
    printf("f(%.3f) = %.3f",x,y);
    return 0;
}
