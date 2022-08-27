#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define pi 3.14

int main(void) {
  system("clear");
  setlocale(LC_ALL, "Portuguese");

  double volume, altura, raio;
  
  printf("Digite o raio: ");
  scanf("%lf", &raio);
  
  printf("Digite a altura: ");
  scanf("%lf", &altura);

  volume = pi * (raio*raio) * altura;
  
  printf("Volume: %.3f\n", volume);

  return 0;
}