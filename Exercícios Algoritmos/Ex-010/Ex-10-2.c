#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void) {
  int m[10][10];

  srand(time(NULL));
  
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      m[i][j] = 0;
    }
  }

  m[rand() % 10][rand() % 10] = 8;
    
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%d", m[i][j]);
    }
    printf("\n");
  }
  }