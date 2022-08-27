#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int x[100];
  float media;
  int total = 0, soma = 0;
  
  srand(time(NULL));
  
  for (int i = 0; i < 100; i++) {
    x[i] = rand() % 100 + 1;
    
    // if (i >= 90) {
    //   total += x[i];
    // }

    printf("%d ", x[i]);
    if ((x[i] % 10) == 0) {
      printf("\n");
    }
  }
  // media = total / 10;

  // printf("A média é %f\n", media);


  // for (int i = 0; i < 100; i++) {
  //   if (x[i] > media) {
  //     soma += x[i];
  //  }
  // }
  // printf("%d\n", soma);
}