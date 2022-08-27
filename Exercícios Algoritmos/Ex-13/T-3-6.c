#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


// A  B   C
// 1  4   1
// 2  5   2
//        4
//        5

int const n = 20;
int const j = 30;
double A[n];
double B[j];
double C[n + j];

void lerTudo() {
  for (int i = 0; i < n; i++) 
  {
    // system("clear");
    printf("Digite um número A: ");
    scanf("%lf", &A[i]);
  }
  for (int i = 0; i < j; i++) 
  {
    printf("Digite um número B: ");
    scanf("%lf", &B[i]);
    
  }
}

void processo() 
{ 
  system("clear");
  for (int i = 0; i < n; i++) 
  {
      C[i] = A[i];
  }

  for (int i = n; i < (n + j); i++) 
  {
      C[i] = B[i - n];
  }
    
}

void exibir() {
  for (int i = 0; i < (n + j); i++) { 
    printf("%.2lf\n", C[i]);
  }
}

int main(void) {
  lerTudo();
  processo();
  exibir();
  return 0;
}