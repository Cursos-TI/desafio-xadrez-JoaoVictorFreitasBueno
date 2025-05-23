#include <stdio.h>

int main(){

    int opcao;

    printf("-------------------\n\n");
    printf("Bem vindo ao Jogo de Xadrez.\n");
    printf ("Menu Inicial\n \n");
        printf ("( 1 ): Iniciar Movimentações.\n");
        printf ("( 2 ): Sair.\n \n");
        printf("Escolha uma Opção e aperte ENTER: ");
            scanf("%d", &opcao);


    switch (opcao){


        case 1:
            
    printf("Movimentação da Rainha:\n\n");

    //Movimentos da Rainha
    for(int i = 1; i <= 8; i++){

    printf("-Rainha: Move para a esquerda\n", i);

}

    printf("\nAgora Movimentação da Torre:\n\n");

    //Movimentos da torre
    for(int i = 1; i <= 5; i++){

    printf("-Torre: Move para Cima\n", i);

}
    printf("\nAgora Movimentação do Bispo:\n\n");

    //Movimentos do Bispo
    for(int i = 1; i <= 5; i++){

    printf("-Bispo: Move para a Direita e Esquerda\n", i);

}

printf("\nAgora Movimentação do Cavalo:\n\n");

    //Movimentos do Cavalo

    int MovimentoCavalo = 1;

    while (MovimentoCavalo--){

    for (int j = 0; j < 2; j++)
    {
        printf("-Cavalo: Move para cima\n", j);
    }
    printf("-Cavalo: Move para Direita\n", MovimentoCavalo);

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