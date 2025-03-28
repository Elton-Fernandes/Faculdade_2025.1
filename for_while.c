int num, resp;
int contador = 0;

int main(int argc, char const *argv[])
{
do
{

    printf("Calculadora de Tabuada\n\n");
    printf("Digite o numero para a tabuada ser calculada: ");
    scanf("%d", &num);

    for(contador=0;contador<=10;contador++)
    {
        printf("%d x %d = %d\n", num, contador, num * contador);
    }

    printf("\n1 - novo calculo");
    printf("\n2 - sair\n");
    printf("Qual e a opcao desejada: ");
    scanf("%d", &resp);
    system("Cls");
}   while (resp != 2);

    return 0;
}
