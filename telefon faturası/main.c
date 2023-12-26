#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,ucret;
    printf("kac dakika konustunuz\n");
    scanf("%f",&x);
    if(x<=3)
    {
        ucret = 0.25;
    }
    else
    {
        ucret = 0.25+(x-3)*0.08;
    }
    printf("%.2f ",ucret);
    return 0;
}
