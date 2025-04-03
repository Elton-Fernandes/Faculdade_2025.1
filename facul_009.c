#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float num1, num2;

    printf("Insira um numero qualquer: ");
    scanf("%f", &num1);
    printf("Insira outro numero qualquer: ");
    scanf("%f", &num2);

    if (num1 > num2)
    {
        printf("O primeiro numero e maior");
    }
    else if (num2 > num1)
    {
        printf("O segundo numero e maior");
    }
    else
    {
        printf("os numeros sao iguais");
    }
    

    return 0;
}
