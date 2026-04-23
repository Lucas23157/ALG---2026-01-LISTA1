#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c, media;

    printf("Digite 3 números: ");
    scanf("%f %f %f", &a, &b, &c);

    media = (a + b + c) / 3;

    float maior = a, menor = a;

    if (b > maior) maior = b;
    if (c > maior) maior = c;

    if (b < menor) menor = b;
    if (c < menor) menor = c;

    printf("Maior: %.1f\nMenor: %.1f\nMedia: %.1f\n", maior, menor, media);

    system("pause");
    return 0;
}
