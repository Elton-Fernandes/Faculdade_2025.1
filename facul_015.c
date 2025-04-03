#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num, fatorial;

    fatorial = 1;
    printf("Insira um numero: ");
    scanf("%d", &num);

    for ( int i = 1; i <= num; i++)
    {
        fatorial *= i;
        printf("%d\n", fatorial);

    }
    
    return 0;
}
