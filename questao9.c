#include <stdio.h>
#include <stdlib.h>

int main() {
    int soma = 0;

    for (int i = 0; i <= 6; i++) {
        for (int j = i; j <= 6; j++) {
            soma += i + j;
        }
    }

    printf("Soma total: %d\n", soma);

    system("pause");
    return 0;
}
