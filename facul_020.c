#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 20; i++)
    {
        printf("%d ** 2 = %.f\n", i, pow(i, 2));
    }
    
    return 0;
}
