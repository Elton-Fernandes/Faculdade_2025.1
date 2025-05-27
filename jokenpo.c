#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int jogada, JogadaMaq, partida;

    while (partida != 1){
    
    srand(time(NULL));
    printf("==========JOKEMPO==========\n");
    printf("1 - PEDRA\n2 - PAPEL\n3 - TESOURA\nInsira a sua jogada: ");
    scanf("%d", &jogada);
    printf("===========================\n");

    JogadaMaq = rand() % 3;
    // 0 - pedra 1 - papel 2 - tesoura
    if (JogadaMaq == 0)
    {
        printf("A maquina escolheu PEDRA");
    }
    else if (JogadaMaq == 1)
    {
        printf("A maquina escolheu PAPEL");
    }
    else
    {
        printf("A maquina escolheu TESOURA");
    }
    
    printf("\n===========================\n");
    
    if ((jogada == 1 && JogadaMaq == 2) || (jogada == 2 && JogadaMaq == 0) || (jogada == 3 && JogadaMaq == 1)) 
    {
        printf("Parabens!!! Voce venceu!!");
    }
    else if ((jogada == 1 && JogadaMaq == 0) || (jogada == 2 && JogadaMaq == 1) || (jogada == 3 && JogadaMaq == 2))
    {
        printf("A partida deu empate! Tente novamente!");

    }
    else
    {
        printf("Voce Perdeu!!!");
    }

    printf("\n===========================\n");
    printf("1 - Sair\n2 - Jogar Novamente\nEscolha a opcao desejada: ");
    scanf("%d", &partida);
    printf("===========================\n");
    }    
    
    printf("JOGATINA ENCERRADA!");
    return 0;
}
