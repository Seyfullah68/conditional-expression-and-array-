#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,n,toplam=0;
    printf("n ve x i giriniz\n");
    scanf("%f %f",&n,&x);
    for(int i=1;i<=2*n-1;i+=2)
    {
        toplam+=(i/(pow(x,2*i)));
    }
    printf("%.2f",toplam);
    return 0;
}
