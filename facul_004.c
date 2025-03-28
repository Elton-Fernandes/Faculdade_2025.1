int main(int argc, char const *argv[])
{
    float compri, larg, area;

    printf("Insira o comprimento do seu terreno: ");
    scanf("%f", &compri);
    printf("Insira a largura do seu terreno: ");
    scanf("%f", &larg);

    area = compri * larg;
    printf("A area do terreno eh %.2f metros.\n", area);
    system("Pause");
    return 0;
}
