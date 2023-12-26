#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("harfi giriniz\n");
    scanf("%c",&ch);
    int sira= (int)ch;
    if(ch>='A'&&ch<='Z'){
        printf("harf %d inci harf",sira-(int)'A'+1);
    }
    else if(ch>='a'&&ch<='z'){
        printf("harf %d inci harf",sira-(int)'a'+1);
    }
    else
        printf("hataaaa");
    return 0;
}
