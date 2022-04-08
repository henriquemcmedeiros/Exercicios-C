#include <stdio.h>

int main(void) {
  int count = 1;
  int tabuada = 0;
  
  printf("Escolha um número de 1 a 10: ");
  scanf("%d", &tabuada);
  
  while (count <= 10) {
    printf ("%d X %d - %d\n", tabuada, count, tabuada * count);
    count++;
  }
}