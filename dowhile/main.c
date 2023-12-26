#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    do
    {
        printf("sayi gir\n");
        scanf("%f",&x);
        if (x<0){
            printf("tekrar gir\n");
            continue;
        }
        if (x==0){
            break;
        }
        printf("%f\n",sqrt(x));

    }
    while (1);
    return 0;
}
