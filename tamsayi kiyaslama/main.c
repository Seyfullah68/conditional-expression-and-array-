#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2;
    printf("iki adet sayi giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);
    if(sayi1==sayi2){
        printf("sayilar esit\n");
    }
    if(sayi1!=sayi2){
        printf("sayilar esit degil\n");
    }
    if(sayi1<sayi2){
        printf("ikinci sayi daha buyuk\n");
    }
    if(sayi1>sayi2){
        printf("ilk sayi daha buyuk\n");
    }
    if (sayi1%sayi2==0){
        printf("ilk sayi ikincinin kati\n");
    }
    else
        printf("ilk sayi ikincinin kati degil");
    return 0;
}
