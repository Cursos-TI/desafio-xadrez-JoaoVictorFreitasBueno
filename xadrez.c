#include <stdio.h>

void moverRainha(int casas){

    if (casas > 0)
    {
        printf("-Rainha: Move para a esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverTorre(int casas){

    if (casas > 0)
    {
        printf("-Torre: Move para Cima\n");
        moverTorre(casas - 1);
    }
}


void moverBispo(int casas){

    for (int direita = 1; direita <= 3; direita++){

        for (int cima = 1; cima <= 1; cima++)
        {
            printf("-Bispo Move para cima\n", cima);
        }
    printf("-Bispo Move Para a Direita\n");
    }
}

void moverCavalo(int casas){

    for (int casa1 = 1, casa2 = 2; casa1 <= casa2; casa1++, casa2--){

        for (int direita = 1;direita <= 2; direita++)
        {
            printf("-Cavalo: Move para Cima\n");
        }

    printf("-Cavalo: Move para Direita\n", casa1);
    }
}



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
            

    //Movimentos da Rainha
    printf("Movimentação da Rainha:\n\n");
    moverRainha(8);



    //Movimentos da torre
    printf("\nAgora Movimentação da Torre:\n\n");
    moverTorre(5);



    //Movimentos do Bispo
    printf("\nAgora Movimentação do Bispo:\n\n");
    moverBispo(3);



    //Movimentos do Cavalo
    printf("\nAgora Movimentação do Cavalo:\n\n");
    moverCavalo(3);


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