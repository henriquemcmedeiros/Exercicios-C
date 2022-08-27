#include <stdio.h>

int main(void) {
  int m[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      m[i][j] = 0;
    }
  }

  m[1][1] = 8;
    
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d", m[i][j]);
    }
    printf("\n");
  }
  }