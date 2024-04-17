#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int sexo;
    float altura, peso_atual;

    printf("1 - Masculino\n2 - Feminino\n\nInforme o seu sexo: ");
    scanf("%d", &sexo);

    printf("Informe a sua altura (ex. 1.60): ");
    scanf("%f", &altura);

    if (sexo == 1){
      peso_atual = (72.7 * altura) - 58;
      printf("\nSeu peso ideal é: %.0f kg", peso_atual);
    }
    if (sexo == 2){
      peso_atual = (62.1 * altura) - 44.7;
      printf("\nSeu peso ideal é: %.0f kg", peso_atual);
    }
}
