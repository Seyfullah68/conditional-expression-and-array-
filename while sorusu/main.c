#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("bir tane sayi giriniz\n");
    scanf("%d",&x);
    while(x!=0){
        printf("%4d",x);
        x--;

    }
    return 0;
}
