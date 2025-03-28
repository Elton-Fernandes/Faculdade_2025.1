float somar (float num1, float num2)
{
    return num1 + num2;
}

float subt (float num1, float num2)
{
    return num1 - num2;
}

float multp (float num1, float num2)
{
    return num1 * num2;
}

float divis ( float num1, float num2)
{
    return num1 / num2;
}

int main(int argc, char const *argv[])
{
    int resp;
    float num1;
    float num2;
    float result;
    printf("Calculadora\n");
    printf("-----------------------\n");
    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);
    printf("Insira o segundo numero: ");
    scanf("%f", &num2);
    printf("-----------------------\n");
    
    printf("1 - soma\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");
    printf("Escolha a operacao desejada: ");
    scanf("%d", &resp);

    switch (resp)
    {
    case 1:
        result = somar(num1, num2);
        break;

    case 2:
        result = subt(num1, num2);
        break;

    case 3:
        result = multp(num1, num2);
        break;

    case 4: 
        if (num2 == 0)
        {
            printf("Nao eh possivel realizar esta operacao.\n");
        }
        else
        {
            result = divis(num1, num2);
        }
        break;

    default:
        printf("Opcao invalida.\n");
        break;
    }

    printf("-----------------------\n");
    printf("Resultado: %.2f\n", result);
    return 0;
}