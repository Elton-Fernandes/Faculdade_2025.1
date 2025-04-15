#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, resultado = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

  for (int i = 2; i < num / 2; i++)
  {
    if (num % i == 0)
    {
       resultado++;
       break;
    }
    
  }
  
  if (resultado == 0)
  {
    printf("Numero primo");
  }
  else
  {
    printf("Nao primo");
  }
  
  
    
    return 0;
}
