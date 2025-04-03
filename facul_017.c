#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int soma;
    soma = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
        }
        
    }
    printf("%d", soma);
    return 0;
}
