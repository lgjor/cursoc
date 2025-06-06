#include <stdio.h>
#include <math.h>

int main() {
    float salario1;
    float salario2;
    float diferenca;
    printf("----------Bem-vindo ao programa de cálculo de diferença----------\n");
    printf("Informe o salário do jogador 1: \n");
    
    do {
        scanf("%f", &salario1);
        if (salario1 < 0) {
            printf("Salário inválido. Informe novamente: \n");
        }
    } while (salario1 < 0);
    printf("Informe o salário do jogador 2: \n");
    
    do {
        scanf("%f", &salario2);
        if (salario2 < 0) {
            printf("Salário inválido. Informe novamente: \n");
        }
    } while (salario2 < 0);

    // Calcula a diferença absoluta entre os salários
    diferenca = fabs(salario1 - salario2);
    printf("----------Resultados----------\n");
    printf("Salário do jogador 1: %.2f\n", salario1);
    printf("Salário do jogador 2: %.2f\n", salario2);
    printf("Diferença absoluta entre os salários: %.2f\n", diferenca);
    // Método 2 sem Math. Calcula diferença e indica maior
    if (salario1 > salario2) {
        diferenca = salario1 - salario2;
        printf("O jogador 1 recebe mais. A diferença entre os salários é: %.2f\n", diferenca);
    } else if (salario2 > salario1) {
        diferenca = salario2 - salario1;
        printf("O jogador 2 recebe mais. A diferença entre os salários é: %.2f\n", diferenca);
    } else {
        printf("Os salários são iguais, não há diferença.\n");
    }
    printf("----------Fim do programa----------\n");
    return 0;
}