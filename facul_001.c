

int main(int argc, char const *argv[])
{
    int n1, n2, soma;

    printf("Insira o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Insira o segundo numero inteiro: ");
    scanf("%d", &n2);
    
    soma = n1 + n2;
    printf("O Resultado da soma entre %d e %d eh %d\n", n1, n2, soma);
    system("Pause");
    return 0;
}
