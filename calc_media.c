int main(int argc, char const *argv[])
{
    printf("Bem vindo a calculadora de media!!\n");
    

    float nota1,nota2,media;
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    system("pause");
    system("cls");
    
    media = (nota1+nota2)/2;
    printf("A media das notas inseridas eh %.1f.\n", media);
    system("pause");

    if (media >= 7)
    {
        printf("Aluno aprovado!\n");
    }
    
    else 
    {
        printf("Aluno reprovado!\n");
    }
    
    printf("Obrigado por utilizar a calculadora de medias!");


    return 0;
}
