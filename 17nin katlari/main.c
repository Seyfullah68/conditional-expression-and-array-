#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("sayi gir\n");
    scanf("%d",&x);
    int i=0,j=0;
    while(i<=x){
        if(i%17==0){
            printf("%3d  ",i);
            j++;
            if(j%10==0){
                printf(" \n");
            }


        }
        i++;
    }
    return 0;
}
