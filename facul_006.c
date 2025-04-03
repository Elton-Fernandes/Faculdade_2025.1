#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int valor;

    printf("Insira o valor que deseja sacar: ");
    scanf("%d", &valor);

    if (valor > 0)
    {
        printf("valor positivo!");
    }
    else 
    {
        printf("Valor negativo!");
    }
    
    return 0;
}
