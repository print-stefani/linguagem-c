#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float salario, ajuste;

    printf("Informe o seu salario: ");
    scanf("%f", &salario);

    if (salario > 500 && salario <= 1000){
        ajuste = (salario * 0.10) + salario;
        printf("\nReajuste de 10%% \nSalario reajustado para R$ %0.2f", ajuste);
    } else if (salario <= 500){
        ajuste = (salario * 0.15) + salario;
        printf("\nReajuste de 15%% \nSalario reajustado para R$ %0.2f", ajuste);
    } else{
        ajuste = (salario * 0.05) + salario;
        printf("\nReajuste de 5%% \nSalario reajustado para R$ %0.2f", ajuste);
    }

    printf("\n\n\n");
}
