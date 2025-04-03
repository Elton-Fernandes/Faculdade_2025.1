#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



float media (float nota1, float nota2)
{
   return (nota1 + nota2) / 2;
}

void aprovacao_rocha(float media_variavel)
{
    if (media_variavel < 7.0)
    {
        printf("ALUNO REPROVADO\n");
       
    }
    else
    {
        printf("ALUNO APROVADO\n");   
    }
}


int main(int argc, char const *argv[])
{
    float nota1, nota2, media_variavel;
    int colegio, resp;
    
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Bem-vinda a sua calculadora de média, Érica!\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");


    printf("Em qual escola devemos basear o cálculo de média?");
    printf(
    "\n[ 1 ] - COLÉGIO ROCHA\n"
    "[ 2 ] - SAIR DO PROGRAMA\n"
    );
    printf("Insira a opção desejada: ");
    scanf("%d", &colegio);
    system("Pause");
    

do
{
    switch (colegio)
    {
    case 1:
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Insira a primeira nota: ");
        scanf("%f", &nota1);
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Insira a segunda nota: ");
        scanf("%f", &nota2);
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

        media_variavel = media(nota1, nota2);
        printf("A média do aluno e %.1f pontos.\n", media_variavel);
        aprovacao_rocha(media_variavel);
        system("Pause");
        break;
    
    default:
        printf("OPÇÃO INEXISTENTE! TENTE NOVAMENTE!");
        break;
    }

    
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf(
    "A senhora deseja realizar mais um cálculo?\n"
    "[ 1 ] - SIM\n"
    "[ 2 ] - NÃO\n"
        );
    printf("Insira a sua resposta: ");
    scanf("%d", &resp);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    system("Pause");
    system("cls");
    

} while (resp != 2);



    return 0;

}

