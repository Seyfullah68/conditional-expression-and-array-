#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,toplam=0;
    printf("sayi gir\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            toplam=toplam+i;
            if(i!=n){
            printf("%d+",i);
            }
            else
                printf("%d",i);
    }
    printf("=%d",toplam);
    return 0;
}
