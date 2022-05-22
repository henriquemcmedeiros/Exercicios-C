#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void) {
  int m[20][20];
  int soma = 0;
  srand(time(NULL));

  // Preenchendo
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      m[i][j] = rand() % 90 + 10;

      if (i == j){
        soma += m[i][j];  
      }
    }
  }
  printf("%d\n", soma);
}