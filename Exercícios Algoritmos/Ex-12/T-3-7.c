#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int const n = 20;
double A[n];
double B[n];

void lerTudo() {
  for (int i = 0; i < n; i++) 
  {
    // system("clear");
    printf("Digite um número A: ");
    scanf("%lf", &A[i]); 
  }
}

void processo() 
{ 
  system("clear");
  
  for (int i = 19; i >= 0; i--)
  {
    B[i] = A[i];
    printf("%.2lf ", B[i]);
  }
}


void exibir() {
  printf("\n\n");
  for (int i = 0; i < n; i++) 
  { 
    printf("%.2lf ", A[i]);
  }
}

int main(void) {
  lerTudo();
  processo();
  exibir();
  return 0;
}