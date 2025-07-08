#include <stdio.h>

int main() {
    int numeroDoPedido = 0;
    int resultado_scanf;
    printf("------------ Cardapio interativo -------------- \n");
    printf("1. Hambúrguer \n");
    printf("2. Cachorro-quente \n");
    printf("3. Pizza \n");
    printf("4. Sair \n");
    printf("----------------------------------------------- \n");
    while ( numeroDoPedido != 4){
        printf("Digite seu pedido: ");
        resultado_scanf = scanf("%d", &numeroDoPedido);
        if (resultado_scanf != 1 || numeroDoPedido < 1) {
            printf("Entrada invalida! Por favor, digite um numero inteiro entre 1 e 4.\n");
            while (getchar() != '\n' && !feof(stdin));
        }
            switch (numeroDoPedido){
                case 1:
                    printf("Aqui está seu Hambúrguer\n");
                    break;
                case 2:
                    printf("Aqui está seu Cachorro-quente\n");
                    break;
                case 3:
                    printf("Aqui está sua Pizza\n");
                    break;
                case 4:
                    printf("Encerrando pedido...\n");
                    break;
                default:
                    printf("Opção inválida!\n");
                    break;
            }
    }
    
}