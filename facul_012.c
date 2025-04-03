#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num, i;
    i = 1;

    printf("Insira um numero qualquer: ");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("%d\n", i);
        i++;
    }
    
    
    return 0;
}
