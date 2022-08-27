#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int r1 = 0;
  int r2 = 0;
  int r3 = 0;
  int count = 0;
  int a = 0;
  srand(time(NULL));

  int chute1, chute2, chute3;
  printf("=======JOGO DO MENTALISTA 3.0=======\n");
  printf("TENTE ADIVINHAR DOIS NÚMEROS DE 1 A 60\n");
  printf("Digite o primeiro número de 1 a 60: ");
  scanf("%d", &chute1);
  printf("Digite o segundo número de 1 a 60: ");
  scanf("%d", &chute2);
  printf("Digite o terceiro número de 1 a 60: ");
  scanf("%d", &chute3);
  
  do {
    int r1 = rand() % 60 + 1;
    int r2 = rand() % 60 + 1;
    int r3 = rand() % 60 + 1;

    count++;
    if (chute1 != r1 && chute1 != r2 && chute1 != r3 && chute2 != r1 && chute2 != r2 && chute2 != r3 && chute3 != r1 && chute3 != r2 && chute3 != r3) {
      a = 1;
    }
    else if (((chute1 == r1 || chute1 == r2 || chute1 == r3) && chute2 != r1 && chute2 != r2 && chute2 != r3 && chute3 != r1 && chute3 != r2 && chute3 != r3)) {
      a = 1;
    }
    else if (((chute2 == r1 || chute2 == r2 || chute2 == r3) && chute1 != r1 && chute1 != r2 && chute1 != r3 && chute3 != r1 && chute3 != r2 && chute3 != r3)) {
      a = 1;
    }
    else if (((chute3 == r1 || chute3 == r2 || chute3 == r3) && chute2 != r1 && chute2 != r2 && chute2 != r3 && chute1 != r1 && chute1 != r2 && chute1 != r3)) {
      a = 1;
    }
    else if (((chute1 == r1 || chute1 == r2 || chute1 == r3) && (chute2 == r1 || chute2 == r2 || chute2 == r3) && chute3 != r1 && chute3 != r2 && chute3 != r3)) {
      a = 1;
    }
    else if (((chute1 == r1 || chute1 == r2 || chute1 == r3) && (chute3 == r1 || chute3 == r2 || chute3 == r3) && chute2 != r1 && chute2 != r2 && chute2 != r3)) {
      a = 1;
    }
    else if (((chute3 == r1 || chute3 == r2 || chute3 == r3) && (chute2 == r1 || chute2 == r2 || chute2 == r3) && chute1 != r1 && chute1 != r2 && chute1 != r3)) {
      a = 1;
    }
    else {
      a = 0;
    }
  } while (a == 1);
  
  printf("A quantidade de vezes que rodou foi de %d\n", count);
}