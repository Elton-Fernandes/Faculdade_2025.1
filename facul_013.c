#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float num;

    printf("Insira um numero real: ");
    scanf("%f", &num);

    if (num >= 10 && num <= 20)
    {
        printf("valido");
    }
    else
    {
        printf("invalido");
    }
    

    return 0;
}
