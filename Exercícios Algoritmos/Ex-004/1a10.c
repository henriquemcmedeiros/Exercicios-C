#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int r = rand() % 10 + 1;

  int chute, tentativas;
  tentativas = 2;
  
  printf("========JOGO DO MENTALISTA========\n");
  printf("TENTE ADIVINHAR O NÚMERO DE 1 A 10\n");
  printf("Digite um número de 1 a 10: ");
  scanf("%d", &chute);
  
  if (r == chute){
    printf("Parabéns você acertou que o número era %d\n", r);
  }
  else {
    printf("Você errou tente novamente. Você tem %d chutes ", tentativas);
    tentativas = tentativas - 1;
    if (chute > r){
      printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
      printf("\nSeu número é maior do que o da máquina");
      printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    }
    else{
      printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
      printf("\nSeu número é menor do que o da máquina");
      printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    }
    
    printf("\nDigite um outro número de 1 a 10: ");
    scanf("%d", &chute);
    
    if (r == chute){
      printf("Parabéns você acertou que o número era %d", r);
    }
    else {
      printf("Você errou tente novamente. Você tem %d chutes", tentativas);
      tentativas = tentativas - 1;

      if (chute > r){
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\nSeu número é maior do que o da máquina");
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
      }
      else{
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\nSeu número é menor do que o da máquina\n");
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
      }
      
      printf("\nDigite um outro número de 1 a 10: ");
      scanf("%d", &chute);
      
      if (r == chute){
        printf("\nParabéns você acertou que o número era %d\n", r);
      }
      else {
        printf("Acabaram as tentativas o número era: %d\n", r);
      }
    }
  }
}
  