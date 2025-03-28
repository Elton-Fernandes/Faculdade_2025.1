int main(int argc, char const *argv[])
{
    system("Color B");
    char nome_completo[40];
    printf("Insira seu nome completo: ");
    gets(nome_completo);
    int idade;
    printf("Insira sua idade: ");
    scanf("%d", &idade);
    system("cls");
    printf("Seu nome eh %s e sua idade eh %d anos.\n", nome_completo, idade);
    system("pause");
    
    return 0;
}
