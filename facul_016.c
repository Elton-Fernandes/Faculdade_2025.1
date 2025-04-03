#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float nota, soma;
    soma = 0;

    for (int i = 1; i <= 5; i++)
    {
        printf("Insira a nota: ");
        scanf("%f", &nota);
        soma += nota;
    }
    system("Pause");
    printf("A media das notas e %f", soma / 5);
    return 0;
}
