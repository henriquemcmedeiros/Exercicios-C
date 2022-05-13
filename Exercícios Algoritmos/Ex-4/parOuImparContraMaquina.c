#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  // Escolher o número da máquina
  srand(time(NULL));
  int r = rand() % 10 + 1;

  // Escolher se é par ou ímpar
  int escolha, num;
  printf("=====PAR OU ÍMPAR=====\n");
  printf("ESCOLHA PAR OU ÍMAPAR\n");
  printf("Digite 1 para ÍMPAR ou 2 para PAR: ");
  scanf("%d", &escolha);

  // Escolher o número do jogador
  printf("Digite um número de 1 a 10: ");
  scanf("%d", &num);

  int resposta = r + num;

  if (escolha == 1) {
    if (resposta % 2 == 1){
      printf("Parabéns! O número escolhido pela máquina foi %d\n", r);
    }
    else {
      printf("Você perdeu! O número escolhido pela máquina foi %d\n", r);
    }
  }
  else {
    if (resposta % 2 == 0){
      printf("Parabéns! O número escolhido pela máquina foi %d\n", r);
    }
    else {
      printf("Você perdeu! O número escolhido pela máquina foi %d\n", r);
    }
  }
}