#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("iki tane sayi giriniz\n");
    scanf("%f%f",&a,&b);
    if((a>0 && b>0) || (a<0 && b<0)) {
        printf("isaret +");
    }
    else if((a<0 && b>0) || (a<0 && b>0)) {
        printf("isaret -");
    }
    else
        printf("isaret 0");


    return 0;
}
