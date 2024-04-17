#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int valor1, valor2, valor3;

  printf("\nInforme um valor inteiro: ");
  scanf("%d", &valor1);

  printf("\nInforme um valor inteiro: ");
  scanf("%d", &valor2);

  printf("\nInforme um valor inteiro: ");
  scanf("%d", &valor3);

  if (valor1 > valor2) {
    int temp = valor1;
    valor1 = valor2;
    valor2 = temp;
  }
  if (valor2 > valor3) {
    int temp = valor2;
    valor2 = valor3;
    valor3 = temp;
  }
  if (valor1 > valor2) {
    int temp = valor1;
    valor1 = valor2;
    valor2 = temp;
  }

  printf("\nOs valores em ordem crescente são: %d, %d, %d\n", valor1, valor2,
         valor3);
}
