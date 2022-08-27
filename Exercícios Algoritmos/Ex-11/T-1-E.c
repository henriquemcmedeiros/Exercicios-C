#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  system("clear");
  setlocale(LC_ALL, "Portuguese");

  double valor, prestacao, taxa, tempo;
  
  printf("Digite o valor: ");
  scanf("%lf", &valor);
  
  printf("Digite a taxa: ");
  scanf("%lf", &taxa);

  printf("Digite o tempo: ");
  scanf("%lf", &tempo);

  prestacao = valor + (valor * taxa/100) * tempo;
  
  printf("Prestação: %.3f\n", prestacao);

  return 0;
}