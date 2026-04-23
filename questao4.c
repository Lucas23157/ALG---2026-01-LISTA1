#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao, qtd, total_itens = 0;
    float total_bruto = 0, total_desconto = 0, valor_pago;

    do {
        printf("\n--- Menu Lanchonete ---\n");
        printf("1 - Hamburguer (R$ 18.50)\n");
        printf("2 - Suco       (R$ 8.00)\n");
        printf("3 - Fritas     (R$ 12.00)\n");
        printf("4 - Refri      (R$ 6.00)\n");
        printf("5 - Sobremesa  (R$ 10.00)\n");
        printf("0 - Fechar conta\n");
        
        do {
            printf("Escolha uma opcao: ");
            scanf("%d", &opcao);
        } while(opcao < 0 || opcao > 5);

        if(opcao != 0) {
            do {
                printf("Quantidade: ");
                scanf("%d", &qtd);
            } while(qtd <= 0);

            total_itens += qtd;
            switch(opcao) {
                case 1: total_bruto += 18.50 * qtd; break;
                case 2: total_bruto += 8.00 * qtd; break;
                case 3: total_bruto += 12.00 * qtd; break;
                case 4: total_bruto += 6.00 * qtd; break;
                case 5: total_bruto += 10.00 * qtd; break;
            }
        }
    } while(opcao != 0);

    if (total_bruto > 200) total_desconto = total_bruto * 0.85;
    else if (total_bruto > 100) total_desconto = total_bruto * 0.90;
    else total_desconto = total_bruto;

    printf("\nTotal Bruto: R$ %.2f\n", total_bruto);
    printf("Total com Desconto: R$ %.2f\n", total_desconto);
    printf("Itens comprados: %d\n", total_itens);

    do {
        printf("\nValor pago pelo cliente: R$ ");
        scanf("%f", &valor_pago);
        if(valor_pago < total_desconto) printf("Valor insuficiente!\n");
    } while(valor_pago < total_desconto);

    printf("Troco: R$ %.2f\nObrigado!\n", valor_pago - total_desconto);

    system("pause");
    return 0;
}
