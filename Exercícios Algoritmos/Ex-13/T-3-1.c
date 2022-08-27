#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int const n = 10;
double dados[n];

void lerTudo() {
  for (int i = 0; i < n; i++) {
    system("clear");
    printf("Digite um número: ");
    scanf("%lf", &dados[i]);
  }
}

void exibir() {
  for (int i = 0; i < n; i++) { 
    printf("%.2lf\n", dados[i]);
  }
}

int main(void) {
  lerTudo();
  exibir();
  return 0;
}