#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    float n,x,toplam=0;
    char ca;
    do
    {
        printf("n x i giriniz, coklu islem icin e veya E ye basiniz\n");
        scanf("%f %f ",&n,&x);
        scanf("%c",&ca);
        for(int i=1;i<=2*n-1;i+=2)
        {
            toplam=+i/pow(x,i+1);
        }
        printf("toplam: %f\n ",toplam);
    }
    while((ca=='e')||(ca=='E'));
    printf("byeeee");
    return 0;
}
