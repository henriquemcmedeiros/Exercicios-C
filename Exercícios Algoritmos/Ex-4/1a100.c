#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int r = rand() % 100 + 1;
  printf("%d\n", r);
}