int main(int argc, char const *argv[])
{
    float n1, n2, n3, media;

    printf("Insira a primeira nota: ");
    scanf("%f", &n1);
    printf("Insira a segunda nota: ");
    scanf("%f", &n2);
    printf("Insira a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3)/ 3;
    printf("A media aritmetica desse aluno eh %.1f\n", media);
    system("Pause");

    return 0;
}
