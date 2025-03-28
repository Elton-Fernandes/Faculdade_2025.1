float taxacambio, valorReal, resultado, valorEuro, valorDolar, valorPeso;
int resposta;

int main(int argc, char const *argv[])
{
    printf("-----------------------------------\n");
    printf("Bem vindo(a) ao conversor de moedas!\n");
    printf("Insira o valor em reais que o senhor(a) deseja converter: ");
    scanf("%f", &valorReal);
    printf("-----------------------------------\n");

    printf("1 - Conversao para Dolar\n");
    printf("2 - Conversao para Euro\n");
    printf("3 - Conversao para Pesos argentinos\n");
    printf("Insira a opcao desejada: ");
    scanf("%d", &resposta);
    printf("-----------------------------------\n");

    switch (resposta)
    {
    case 1:
        taxacambio = 5.83;
        valorDolar = valorReal / taxacambio;
        printf("\nO valor em dolares eh %.2f.\n", valorDolar);
        break;
    
    case 2:
        taxacambio = 6.32;
        valorEuro = valorReal / taxacambio;
        printf("\nO valor em euro eh %.2f.\n", valorEuro);
        break;
    
    case 3:
        taxacambio = 0.005482;
        valorPeso = valorReal / taxacambio;
        printf("\no valor em pesos argentinos eh %.2f.\n", valorPeso);
        break;
    
    default:
        printf("\nOpcao invalida.\n");
        break;
    }

    printf("-----------------------------------\n");

    return 0;
}
