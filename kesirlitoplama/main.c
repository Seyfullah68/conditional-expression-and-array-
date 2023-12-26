#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    int a,b,pay,payda;
    printf("toplama +, cikarma -\n");
    scanf("%c",&op);
    printf("a ve b yi gir\n");
    scanf("%d %d",&a,&b);
    if ((a==0)||(b==0))
    {
        printf("hataaa");
        return 0;

    }
    else
    {


       switch (op){
           case '+':
           {
            pay = a+b;
            payda = a*b;
            printf(" %d /%d",pay,payda);
            break;
           }
           case '-':
            {
               pay = a-b;
               payda = a*b;
               printf(" %d /%d",pay,payda);
               break;
            }


           default :
            {
                printf("yanlis operator");
                break;
            }
       }
    }
    return 0;
}
