#include <stdio.h>

int main(void) {
  int count = 0;
  int soma = 0;
  
  while (count <= 100) {
    soma += count;
    count++;
  }
  printf("A soma de 1 a 100 é igual a: %d\n", soma);
}