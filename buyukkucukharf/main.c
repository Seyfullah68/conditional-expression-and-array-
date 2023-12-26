#include <stdio.h>
#include <stdlib.h>

int main()
{
    char h;
    printf("bir buyuk harf gir\n");
    scanf("%c",&h);
    if((h<=90)&&(h>=65)){
        //h=h+32;
        printf("%c",tolower(h));
    }
    else
        printf("hataaa");
    return 0;
}
