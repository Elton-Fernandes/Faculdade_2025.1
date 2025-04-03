#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int ano;

    printf("Insira um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) 
    {
        printf("Ano bissexto");
    }
    else
    {
        printf("Ano nao bissexto");
    }
    
    return 0;
}

