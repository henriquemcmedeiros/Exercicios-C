#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  for (int count = 0; count < 10; count++) {
    srand(time(NULL));
    int r = rand() % 100 + 1;
    if ((r % 2) == 0) {
      printf("%d\n", r);
      sleep(1);
    }
    else {
      count--;
    }
  }
}