#include <stdio.h>

int main(void) {
  int count = 1;
  while (count <= 20) {
    printf ("%d - %d\n", count, count * count);
    count++;
  }
}