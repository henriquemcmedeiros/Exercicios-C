#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  system("clear");
  setlocale(LC_ALL, "Portuguese");

  double volume, altura, comprimento, largura;
  
  printf("Digite o comprimento: ");
  scanf("%lf", &comprimento);
  
  printf("Digite a altura: ");
  scanf("%lf", &altura);

  printf("Digite a largura: ");
  scanf("%lf", &largura);

  volume = comprimento * comprimento * largura;
  
  printf("Volume: %.3f\n", volume);

  return 0;
}