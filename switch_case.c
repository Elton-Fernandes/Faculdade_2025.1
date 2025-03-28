// aa
// aa
int numero;

int main(int argc, char const *argv[])
{
    printf("Sistemas operacionais\n\n");
    printf("1 - Windows\n");
    printf("2 - Linux\n");
    printf("3 - Sair\n");
    printf("\nEscolha a opcao desejada: ");
    scanf("%d", &numero);

    switch (numero)
    {
        case 1: 
            system("cls");
            printf("Carregando o Windows...\n");
            break;
        case 2:
            system("cls");
            printf("Carregando o Linux...\n");
            break;
        case 3: 
            system("cls");
            printf("Encerrando o programa...\n");
            break;
        default:
            printf("Opcao invalida.\n");

    }

    system("pause");

    return 0;
}
