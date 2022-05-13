#include <stdio.h>

int main(void) {
  char x[10];
  for (int i = 0; i < 10; i++) {
    x[i] = 1;
    printf("%d\n", x[i]);
  }
  
  return 0;
}