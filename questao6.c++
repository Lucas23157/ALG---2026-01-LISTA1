#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[50];
    float saldo, valor;
    int opcao, meses, op_dep = 0, op_saq = 0;
    float tot_dep = 0, tot_saq = 0;

    printf("Nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Saldo inicial: ");
    scanf("%f", &saldo);

    do {
        printf("\n1- Deposito | 2- Saque | 3- Extrato | 4- Rendimento | 0- Sair\n");
        scanf("%d", &opcao);

        if(opcao == 1) {
            scanf("%f", &valor);
            saldo += valor;
        }
        else if(opcao == 2) {
            scanf("%f", &valor);
            saldo -= valor;
        }
    } while(opcao != 0);

    system("pause");
    return 0;
}