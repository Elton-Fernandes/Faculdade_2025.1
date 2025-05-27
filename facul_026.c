#include <stdio.h>

int main(int argc, char const *argv[])
{
    int turma, alunos;
    float nota1, nota2, nota3, media, mediaTurma, notaTurma;

    printf("==============================================================\n");
    printf("Insira a turma desejada: ");
    scanf("%d", &turma);
    printf("==============================================================\n");

    while (turma > 0)
    {
        notaTurma = 0;
        printf("==============================================================\n");
        printf("Insira o numero de alunos desta turma: ");
        scanf("%d", &alunos);
        printf("==============================================================\n");

        for (int i = 1; i <= alunos; i++)
        {
            printf("Insira a nota 1: ");
            scanf("%f", &nota1);
            printf("Insira a nota 2: ");
            scanf("%f", &nota2);
            printf("Insira a nota 3: ");
            scanf("%f", &nota3);

            media = (nota1+nota2+nota3)/3;
            printf("A nota desse aluno eh: %.1f\n", media);
            notaTurma += media;
            mediaTurma = notaTurma / alunos;
            if (media >= 7)
            {
                printf("Aluno aprovado\n");
            }
            else
            {
                printf("Aluno reprovado\n");
            }

        }

        printf("A media dos alunos dessa turma eh: %f", mediaTurma);
        printf("\n==============================================================\n");
        printf("Insira a turma desejada: ");
        scanf("%d", &turma);
        printf("==============================================================");
        
        
    }
    
    return 0;
}
