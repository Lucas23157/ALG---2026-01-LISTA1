#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i, primo = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num <= 1) primo = 0;

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo)
        printf("Número primo\n");
    else
        printf("Não é primo\n");

    system("pause");
    return 0;
}