#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int a,b,c,x,sonuc;
    printf("sirasi ile a b c x i gir\n");
    scanf("%d%d%d%d",&a,&b,&c,&x);
    sonuc=a*x*x+b*x+c;
    printf("%d",sonuc);

    return 0;
}
