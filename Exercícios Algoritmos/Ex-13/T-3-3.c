#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int const n = 20;
double A[n];
double B[n];
double C[n];

void lerTudo() {
  for (int i = 0; i < n; i++) {
    system("clear");
    printf("Digite um número A: ");
    scanf("%lf", &A[i]);
    printf("Digite um número B: ");
    scanf("%lf", &B[i]);
  }
}

void processo() {
  for (int i = 0; i < n; i++) {
    C[i] = A[i] - B[i];
  }
}

void exibir() {
  for (int i = 0; i < n; i++) { 
    printf("%.2lf - %.2lf = %.2lf\n", A[i], B[i], C[i]);
  }
}

int main(void) {
  lerTudo();
  processo();
  exibir();
  return 0;
}