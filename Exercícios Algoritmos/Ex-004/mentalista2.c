#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int r1 = rand() % 5 + 1;
  printf("%d\n", r1);
  int r2 = rand() % 5 + 1;
  printf("%d\n", r2);

  printf("%d\n", r1);
  printf("%d\n", r2);

  int chute1, chute2;
  printf("=======JOGO DO MENTALISTA 2.0=======\n");
  printf("TENTE ADIVINHAR DOIS NÚMEROS DE 1 A 5\n");
  printf("Digite o primeiro número de 1 a 5: ");
  scanf("%d", &chute1);
  printf("Digite o segundo número de 1 a 5: ");
  scanf("%d", &chute2);

  if (chute1 != r1 && chute1 != r2 && chute2 != r1 && chute2 != r2) {
    printf("Você errou os dois números. Eles eram %d e %d\n", r1, r2);
  }
  else {
    if ((chute1 == r1 || chute1 == r2) && chute2 != r1 && chute2 != r2) {
      printf("Você acertou o primeiro número e errou o segundo. Eles eram %d e %d\n", r1, r2);
    }
    else {
      if ((chute2 == r1 || chute2 == r2) && chute1 != r1 && chute1 != r2) {
        printf("Você acertou o segundo número e errou o primeiro. Eles eram %d e %d\n", r1, r2);
      }
      else {
        printf("Você acertou os números realmente eram %d e %d\n", r1, r2);
      }
    }
  }
}