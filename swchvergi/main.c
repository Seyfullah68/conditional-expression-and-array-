#include <stdio.h>
#include <stdlib.h>
#define kvergi 4
#define tvergi 5.6
#define lvergi 19.6

int main()
{
    float fiyat;
    char islem;
    printf("kitap icin 0,temel icin 1,luks icin 2 ye basiniz\n ");
    scanf("%c",&islem);
    printf("fiyati giriniz\n");
    scanf("%f",&fiyat);
    switch (islem)
    {
    case '0':
        {
            fiyat+=fiyat*kvergi/100;
            printf("yeni fiyat %.2f dir\n",fiyat);
            break;
        }
    case '1':
        {
            fiyat+=fiyat*tvergi/100;
            printf("yeni fiyat %.2f dir\n",fiyat);
            break;
        }
    case '2':
        {
            fiyat+=fiyat*lvergi/100;
            printf("yeni fiyat %.2f dir\n",fiyat);
            break;
        }
    default:
        {
            printf("yanlis tusa bastiniz");
            break;
        }
    }
    return 0;
}
