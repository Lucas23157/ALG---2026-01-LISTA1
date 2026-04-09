#include <stdio.h>
#include <stdlib.h>

int main() {
    float num, soma = 0;
    int count = 0;

    while (1) {
        printf("Digite um número: ");
        scanf("%f", &num);

        if (num < 0)
            break;

        soma += num;
        count++;
    }

    if (count > 0)
        printf("Média: %.2f\n", soma / count);
    else
        printf("Nenhum valor válido digitado.\n");

    system("pause");
    return 0;
}