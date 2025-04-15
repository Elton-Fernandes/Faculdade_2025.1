#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    int num;
    for (int i = 0; i <= 10; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &num);

        printf("A raiz de %d eh %.2f\n", num, pow(num, 0.5));

    }
    
    return 0;
}
