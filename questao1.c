#include <stdio.h>
#include <stdlib.h>

int main() {
    float x, y, z;

    printf("Digite o primeiro numero: ");
    scanf("%f", &x);

    printf("Digite o segundo numero: ");
    scanf("%f", &y);

    printf("Digite o terceiro numero: ");
    scanf("%f", &z);

    if ((x+y>z) && (x+z>y) && (y+z>x)) {

        if ((x==y) && (y==z)) {
            printf("Equilatero");
        }
        else if ((x==y) || (y==z) || (x==z)) {
            printf("Isosceles");
        }
        else {
            printf("Escaleno");
        }

        if ((x >= y && x >= z && (y*y + z*z == x*x)) ||
            (y >= x && y >= z && (x*x + z*z == y*y)) ||
            (z >= x && z >= y && (x*x + y*y == z*z))) {

            printf(" e Retangulo");
        }

    } else {
        printf("Nao forma triangulo");
    }

    system("pause");
    return 0;
}
