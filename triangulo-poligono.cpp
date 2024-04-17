#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int lados, medida;

    printf("Informe o numero de lados de um polígono: ");
    scanf("%d", &lados);

    printf("Informe a medida dos lados: ");
    scanf("%d", &medida);

    if (lados == 3) {
        printf("\nÉ um triangulo!! △ \n");
        printf("E sua área é: %.2f cm\n", (float)(medida * medida) / 2);
    }
    if (lados == 4) {
        printf("\nÉ um quadrado!! ◻\n");
        printf("E sua área é: %d cm\n", medida * medida);
    }
    if (lados == 5){
        printf("\nÉ um pentagono!! ⬠");
    }
    if (lados < 3){
      printf("Não é um polígono!!");
    }
    if (lados > 5){
        printf("\nPolígono não identificado!!");
    }
}
