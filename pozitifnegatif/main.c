#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b;
   printf("iki sayi gir\n");
   scanf("%d %d",&a,&b);
   if((a==0)||(b==0))
   {
       printf("sonuc sifir");
   }
   else if((a>0)&&(b<0)||(a<0)&&(b>0))
   {
       printf("negatifff %d",a*b);
   }
   else if((a<0)&&(b<0)||(a>0)&&(b>0))
   {
       printf("pozitiff %d",a*b);
   }

   return 0;
}
