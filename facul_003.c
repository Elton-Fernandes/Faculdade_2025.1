int main(int argc, char const *argv[])
{
    float lado, area;

    printf("Insira o lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;
    printf("A area do quadrado eh %.2f.\n", area);
    system("Pause");
    return 0;
}
