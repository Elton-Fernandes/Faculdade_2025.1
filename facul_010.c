#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float num1, num2;
    int resp;

    printf("Insira um numero: ");
    scanf("%f", &num1);
    printf("Insira outro numero: ");
    scanf("%f", &num2);

    printf("Escolha uma das opcoes a seguir:\n 1-Somar\n 2-Subtrair\n 3-Multiplicar\n 4-Dividir\n");
    scanf("%d", &resp);


    switch (resp)
    {
    case 1:
        printf("A soma dos valores eh %.2f", num1 + num2);
        break;
    case 2:
        printf("A subtracao dos valores eh %.2f", num1 - num2);
        break;
    case 3:
        printf("A multiplicacao dos valores eh %.2f", num1 * num2);
        break;
    case 4:
        if (num2 == 0)
        {
            printf("Nao existe divisao por 0");
        }
        else
        {
            printf("O valor da divisao eh %.2f", num1 / num2);
        }
        break;
    default:
        break;
    }
    return 0;
}
