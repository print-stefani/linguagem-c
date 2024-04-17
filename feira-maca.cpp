  #include <stdio.h>
  #include <stdlib.h>
  #include <locale.h>

  int main() {
      setlocale(LC_ALL, "Portuguese");
    
      int maca;

      printf("\nInforme a quantidade de maças: ");
      scanf("%d", &maca);

      if (maca < 12){
      printf("Unidade por R$ 0.30");
        printf("\nO valor total da compra é: R$ %.2f", maca * 0.30);
      }else {
        printf("Unidade por R$ 0.25");
        printf("\nO valor total da compra é: R$%.2f", maca * 0.25);
      }


      return 0;
  }
