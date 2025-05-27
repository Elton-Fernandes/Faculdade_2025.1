#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[5];
    int maiorNum;

    for (int i = 0; i < 5; i++)
    {
        printf("Insira o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maiorNum = vetor[0];

    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] > maiorNum)
        {
            maiorNum = vetor[i];
        }
        
    }
    
    printf("O maior numero entres os inseridos eh: %d", maiorNum);
        
    return 0;
}
