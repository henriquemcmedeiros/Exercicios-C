#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int x[100];
  float media;
  int total = 0;
  
  srand(time(NULL));
  
  for (int i = 0; i < 100; i++) {
    x[i] = rand() % 100 + 1;
    total += x[i];
  }
  media = total / 100;

  printf("A média é %f\n", media);


//  for (int i = 0; i < 5; i++) {
//    if (x[i] > media) {
//      printf("%d\n", x[i]);
//    }
//  }
}