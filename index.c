#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int qtdRuim, qtdRegular, qtdBom, qtdOtimo, opcao;

    qtdRuim =  0;
    qtdRegular = 0;
    qtdBom = 0;
    qtdOtimo = 0;

    do{
        printf("O que voce achou do atendimento? Digite uma opcao\n");
        printf("0 - RUIM\n");
        printf("1 - REGULAR\n");
        printf("2 - BOM\n");
        printf("3 - OTIMO\n");
        printf("5 - SAIR\n");
        scanf("%d", &opcao);
    
    switch(opcao)
    {
    case 0:
        qtdRuim++;
        break;

    case 1:
        qtdRegular++;
        break;

    case 2:
        qtdBom++;
        break;

    case 3:
        qtdOtimo++;
        break;

    case 5:
        printf("Encerrando a enquete...\n");
        break;

    default:
         printf("Opção inválida. Por favor, escolha uma opção válida.\n");
         break;

    }

    }while (opcao != 5);

    printf("Quantidade de Votos no Ruim: %d\n", qtdRuim);
    printf("Quantidade de Votos no Regular: %d\n", qtdRegular);
    printf("Quantidade de Votos no Bom: %d\n", qtdBom);
    printf("Quantidade de Votos no Otimo: %d\n", qtdOtimo);


    return 0;  
}