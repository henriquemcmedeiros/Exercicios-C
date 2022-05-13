#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int r1 = rand() % 10 + 1;

  sleep(1);
  
  srand(time(NULL));
  int r2 = rand() % 10 + 1;

  if (r1 < 3 && r1 > 7 && r2 < 3 && r2 > 7) {
    printf("Nenhum número soeteado estava entre 3 e 7. Eles eram %d e %d\n", r1, r2);
  }
  else{
    if (r1 >= 3 && r1 <= 7 || r2 >= 3 && r2 <= 7) {
      if(r1 >= 3 && r1 <= 7 && r2 >= 3 && r2 <= 7) {
        printf("Os dois números sorteados estavam entre 3 e 7. Eles eram %d e %d\n", r1, r2);
      }
      else {
        printf("Um dos dois números sorteados estava entre 3 e 7. Eles eram %d e %d\n", r1, r2);
      }
    }
  }
}