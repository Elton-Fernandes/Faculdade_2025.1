int main(int argc, char const *argv[])
{
    float peso, alt, imc;

    printf("Insira seu peso em Kg's: ");
    scanf("%f", &peso);
    printf("Insira sua alura em metros: ");
    scanf("%f", &alt);

    imc = peso / (alt * alt);
    printf("Seu imc corresponde a %.2f\n", imc);
    system("Pause");
    return 0;
}
