#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ort 150

int main()
{
    int no,boy,minboy,minno,fark;
    printf("ogrenci no ve numarayi giriniz\n");
    scanf("%d %d",&no,&boy);
    minno=no;
    minboy=boy;
    fark=abs(ort-minboy);
    while(no>=0)
    {
        printf("ogrenci no ve numarayi giriniz\n");
        scanf("%d %d",&no,&boy);
        if((abs(ort-boy))<fark)
        {
            minno=no;
            minboy=boy;
            fark=abs(ort-minboy);
        }

    }
    printf("%d nolu ogrenci %d boyuna %d boyuyla en yakin",minno,ort,minboy);
    return 0;
}
