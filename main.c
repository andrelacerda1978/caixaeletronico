#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor;
    int opcao = 0;  // Variável para controle do menu
    int cedulas100 = 1, cedulas50 = 1, cedulas20 = 1, cedulas10 = 2, cedulas5 = 1, cedulas2 = 3, cedulas1 = 1;
    int saque100 = 0, saque50 = 0, saque20 = 0, saque10 = 0, saque5 = 0, saque2 = 0, saque1 = 0;

    // Menu simplificado
    while (opcao != -1) {
        printf("\n******************************************************************");
        printf("\nAluno1: Andre Luiz Lacerda - Número de matrícula: 8163960");
        printf("\nAluno1: Diego Vinicius Marçal - Número de matrícula: 24242424");
        printf("\nExercício-Programa 1 — Caixa Eletrônico");
        printf("\nProgramação Avançada - 2024 - Professor: Bruno Perillo");
        printf("\nCompilador: ... (DevC++ ou gcc) versão ...");
        printf("\nMenu:\n");
        printf("0 - Realizar saque\n");
        printf("-1 - Encerrar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            // Reinicia as variáveis de saque para o novo saque
            saque100 = saque50 = saque20 = saque10 = saque5 = saque2 = saque1 = 0;

            // Solicita o valor do saque
            printf("Digite o valor do saque: ");
            scanf("%d", &valor);

            // Calcula a quantidade de cédulas de 100
            if (valor >= 100 && cedulas100 > 0) {
                saque100 = valor / 100;
                if (saque100 > cedulas100) saque100 = cedulas100; // Não pode sacar mais do que o disponível
                valor = valor - (saque100 * 100);
            }

            // Calcula a quantidade de cédulas de 50
            if (valor >= 50 && cedulas50 > 0) {
                saque50 = valor / 50;
                if (saque50 > cedulas50) saque50 = cedulas50;
                valor = valor - (saque50 * 50);
            }

            // Calcula a quantidade de cédulas de 20
            if (valor >= 20 && cedulas20 > 0) {
                saque20 = valor / 20;
                if (saque20 > cedulas20) saque20 = cedulas20;
                valor = valor - (saque20 * 20);
            }

            // Calcula a quantidade de cédulas de 10
            if (valor >= 10 && cedulas10 > 0) {
                saque10 = valor / 10;
                if (saque10 > cedulas10) saque10 = cedulas10;
                valor = valor - (saque10 * 10);
            }

            // Calcula a quantidade de cédulas de 5
            if (valor >= 5 && cedulas5 > 0) {
                saque5 = valor / 5;
                if (saque5 > cedulas5) saque5 = cedulas5;
                valor = valor - (saque5 * 5);
            }

            // Calcula a quantidade de cédulas de 2
            if (valor >= 2 && cedulas2 > 0) {
                saque2 = valor / 2;
                if (saque2 > cedulas2) saque2 = cedulas2;
                valor = valor - (saque2 * 2);
            }

            // O restante são cédulas de 1
            if (valor >= 1 && cedulas1 > 0) {
                saque1 = valor;
                if (saque1 > cedulas1) saque1 = cedulas1;
                valor = valor - saque1;
            }

            // Verifica se o saque foi possível
            if (valor == 0) {
                // Atualiza as cédulas disponíveis após o saque
                cedulas100 -= saque100;
                cedulas50 -= saque50;
                cedulas20 -= saque20;
                cedulas10 -= saque10;
                cedulas5 -= saque5;
                cedulas2 -= saque2;
                cedulas1 -= saque1;

                // Exibe o resultado
                printf("Quantidade de cédulas sacadas:\n");
                printf("100: %d\n", saque100);
                printf("50: %d\n", saque50);
                printf("20: %d\n", saque20);
                printf("10: %d\n", saque10);
                printf("5: %d\n", saque5);
                printf("2: %d\n", saque2);
                printf("1: %d\n", saque1);

                int totalRestanteCaixa = (cedulas100 * 100) + (cedulas50 * 50) + (cedulas20 * 20) +
                             (cedulas10 * 10) + (cedulas5 * 5) + (cedulas2 * 2) + cedulas1;

                printf("Total: %d.\n", totalRestanteCaixa);

            } else {
                printf("Não há cédulas suficientes para realizar o saque.\n");
            }

        } else if (opcao == -1) {
            printf("Encerrando o programa...\n");
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
