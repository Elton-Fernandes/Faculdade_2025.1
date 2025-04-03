#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num1);

    if (num1 % 2 == 0)
    {
        printf("Numero par");
    }
    else
    {
        printf("Numero impar");
    }
    return 0;
}
