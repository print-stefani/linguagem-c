#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int qi;

    printf("Digite o seu QI no formado de 3 digitos: ");
    scanf("%d",&qi);

    if (qi <= 030){
        printf("\nVocê é uma ameba...");
    } else if ((qi > 031)&&(qi <= 050)){
        printf("\nVocê é um débil mental...");
    } else if ((qi > 051)&&(qi <= 070)){
        printf("\nVocê é regular.");
    } else if ((qi > 071)&&(qi <= 100)){
        printf("\nVocê é normal ;) ");
    } else if ((qi > 101)&&(qi <= 150)){
        printf("\nVocê é um gênio :o ");
    }else{
         printf("\nQI inválido. ");
    }

    printf("\n\n\n");
}
