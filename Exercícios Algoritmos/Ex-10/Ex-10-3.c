#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void) {
  int m[20][20];
  int maiorSoma;
  srand(time(NULL));

  // Preenchendo
  for (int i = 0; i < 20; i++) {
    int soma = 0;
    
    for (int j = 0; j < 20; j++) {
      m[i][j] = rand() % 90 + 10;
      soma += m[i][j];
    }
    
    if (maiorSoma < soma) {
      maiorSoma = soma;
    }   
  }
  printf("%d\n", maiorSoma);
}