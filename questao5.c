#include <stdio.h>
#include <stdlib.h>

int main() {
    int vagas = 50, ocupadas = 0, total_carros = 0;
    float faturamento = 0;
    int opcao, ent, sai;

    do {
        printf("\n--- Estacionamento ---\n");
        printf("1- Entrada | 2- Saida | 3- Relatorio | 0- Encerrar\nOpcao: ");
        scanf("%d", &opcao);

        if(opcao == 1) {
            if(ocupadas < vagas) {
                do {
                    printf("Hora de entrada (0-23): ");
                    scanf("%d", &ent);
                } while(ent < 0 || ent > 23);
                
                ocupadas++;
                total_carros++;
                printf("Entrada registrada!\n");
            } else {
                printf("Lotado.\n");
            }
        } 
        else if(opcao == 2) {
            if(ocupadas > 0) {
                do {
                    printf("Hora entrada: ");
                    scanf("%d", &ent);
                    printf("Hora saida: ");
                    scanf("%d", &sai);
                } while(ent < 0 || ent > 23 || sai < ent);
                
                int horas = sai - ent;
                if(horas == 0) horas = 1;
                
                float valor = 10.0 + (horas > 1 ? (horas - 1) * 5.0 : 0);
                
                faturamento += valor;
                ocupadas--;
                printf("Valor: R$ %.2f\n", valor);
            } else {
                printf("Sem carros.\n");
            }
        } 
        else if(opcao == 3) {
            printf("Ocupadas: %d\n", ocupadas);
            printf("Livres: %d\n", vagas - ocupadas);
            printf("Total carros: %d\n", total_carros);
            printf("Faturamento: %.2f\n", faturamento);
        }
    } while(opcao != 0);

    system("pause");
    return 0;
}
