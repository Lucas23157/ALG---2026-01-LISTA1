#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade;
    float nota, soma = 0, media;

    printf("Digite a quantidade das notas: ");
    scanf("%d", &quantidade);

    while (quantidade < 1 || quantidade > 10){
        printf("Valor invalido, digite novamente: ");
        scanf("%d", &quantidade);
    }

    for(int i = 1; i <= quantidade; i++){
        printf("Digite a nota: ");
        scanf("%f", &nota);

        while(nota < 0 || nota > 10){
            printf("Nota invalida: ");
            scanf("%f", &nota);
        }

        soma += nota;
    }

    media = soma / quantidade;

    printf("Media: %.2f\n", media);

    if(media >= 7 && media <= 10){
        printf("Aprovado");
    }
    else if(media >= 5 && media < 7){
        printf("Recuperacao");
    }
    else{
        printf("Reprovado");
    }

    system("pause");
    return 0;
}
