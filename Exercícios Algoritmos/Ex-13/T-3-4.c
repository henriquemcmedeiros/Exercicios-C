#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int const n = 15;
double A[n];
double B[n];


void lerTudo() {
  for (int i = 0; i < n; i++) {
    system("clear");
    printf("Digite um número: ");
    scanf("%lf", &A[i]);
  }
}

void processo() {
  for (int i = 0; i < n; i++) {
    B[i] = pow(A[i], 2);
  }
}

void exibir() {
  for (int i = 0; i < n; i++) { 
    printf("%.2lf\n", B[i]);
  }
}

int main(void) {
  lerTudo();
  processo();
  exibir();
  return 0;
}