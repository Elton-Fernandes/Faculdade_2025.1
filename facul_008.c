#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int idade;

    printf("Insira a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16)
    {
        printf("Pode votar");
    }
    else
    {
        printf("Nao pode votar");
    }
    
    return 0;
}

