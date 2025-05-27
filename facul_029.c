#include <stdio.h>

int main(int argc, char const *argv[])
{
    char letras[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Insira o caractere: ");
        scanf(" %c", &letras[i]);
    }

    for (int i = 5; i >= 0; i--)
    {
        printf("%c", letras[i]);
    }
    
    
    return 0;
}
