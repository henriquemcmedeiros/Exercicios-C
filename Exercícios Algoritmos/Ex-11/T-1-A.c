#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  system("clear");
  setlocale(LC_ALL, "Portuguese");

  double celc, fahr;
  
  printf("Digite a temperatura em ºC: ");
  scanf("%lf", &celc);

  fahr = (9 * celc + 160)/5;
  
  printf("Fahreinheit: %.3f\n", fahr);

  return 0;
}