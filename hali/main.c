#include <stdio.h>
#include <stdlib.h>

int main()
{
    char hali;
    printf("hali tipi gir t b s \n");
    scanf("%c",&hali);
    float alan,para;
    printf("alani gir\n");
    scanf("%f",&alan);
    switch(hali){
        case 't':{
            printf("%.2f",alan*17);
            break;}
        case 'b':{
            printf("%.2f",alan*18);
            break;
            }
        case 's':{
            printf("%.2f",alan*19);
            break;

        default:{
            printf("yanliss");
        }



        }
    }
    return 0;
}
