#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, soma = 0;

    printf("Insira um numero inteiro positivo qualquer: ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        soma += i;
    }
    
    printf("A soma dos numeros de 0 a %d eh %d", num, soma);
    return 0;
}
