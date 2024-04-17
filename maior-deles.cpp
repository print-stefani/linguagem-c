#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, b,c;

    printf("Informe o valor de A: ");
    scanf("%d", &a);

    printf("Informe o valor de B: ");
    scanf("%d", &b);

    printf("Informe o valor de C: ");
    scanf("%d", &c);

    if (a > b && a > c){
      printf("A é o numero maior: %d", a);
    }
    if (b > a && b > c){
      printf("B é o numero maior: %d", b);
    }
    if (c > a && c > b){
      printf("C é o numero maior: %d", c);
    }
 
}
