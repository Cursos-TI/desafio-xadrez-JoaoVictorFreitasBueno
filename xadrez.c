#include <stdio.h>

int main(){

    int opcao;
    //Apresentações Inciais do Jogo
    printf("-------------------\n\n");
    printf("Bem vindo ao Jogo de Xadrez.\n");

    //Menu interativo de Iniciação
    printf ("Menu Inicial\n \n");
        printf ("( 1 ): Iniciar Movimentações.\n");
        printf ("( 2 ): Sair.\n \n");
        printf("Escolha uma Opção e aperte ENTER: ");
            scanf("%d", &opcao);


    switch (opcao){


        case 1:
            
    printf("Movimentação ddo Bispo:\n\n");

    //Movimentos da Bispo
    for(int i = 1; i <= 5; i++){

    printf("%d-Bispo: Move Cima e Direita\n", i);

}

    printf("\nAgora Movimentação da Torre:\n\n");

    //Movimentos da torre
    for(int i = 1; i <= 5; i++){

    printf("%d-Torre: Move para Direita\n", i);

}
    printf("\nAgora Movimentação da Rainha:\n\n");

    //Movimentos da Rainha
    for(int i = 1; i <= 8; i++){

    printf("%d-Rainha: Move para a Esquerda\n", i);

}

    printf("\nFim dos movimentos, ate a proxima...\n\n");

            break;

        case 2:
        printf("Saindo...\n");
        break;
        
        default:
            printf("Opção Inválida.\n");
            break;
        }

    return 0;
}