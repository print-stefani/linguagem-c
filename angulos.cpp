#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int angulo1, angulo2, angulo3;

    printf("\nDigite os angulos do triângulo\n\nInforme o angulo 1: ");
    scanf("%d", &angulo1);

    printf("Informe o angulo 2: ");
    scanf("%d", &angulo2);

    printf("Informe o angulo 3: ");
    scanf("%d", &angulo3);

    if (angulo1 + angulo2 + angulo3 == 180) {
        if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90) {
            printf("\nÉ um Triângulo Retângulo!");
        } else if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90) {
            printf("\nÉ um Triângulo Obtusângulo!");
        } else {
            printf("\nÉ um Triângulo Acutângulo!");
        }
    } else {
        printf("\nOs ângulos informados não formam um triângulo válido.");
    }
}
