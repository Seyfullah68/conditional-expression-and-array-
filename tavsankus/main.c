#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tavsan=1042,kus=2272,yil=0;
    int tart=3.8,kart=1.2;
    while(kus>=tavsan)
    {
        tavsan+=3.8*tavsan/100;
        kus+=1.2*kus/100;
        yil+=1;
    }
    printf("%d kadar yil surer %d tavsan ve %d kus",yil,tavsan,kus);
    return 0;
}
