#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void) {
  int m[10][10];
  int user = 0;
  int linAtual = 5;
  int colAtual = 5;

  srand(time(NULL));
  
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      m[i][j] = 0;
    }
  }

  do {
    m[linAtual][colAtual] = 1;
    
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        printf("%d ", m[i][j]);
      }
      printf("\n");
    }
    
    printf("1 - Cima\n");
    printf("2 - Baixo\n");
    printf("3 - Esquerda\n");
    printf("4 - Direita\n");
    printf("5 - Sair\n");
    printf("Digite o número referente a sua ação: ");
    scanf("%d", &user);
  
    if (user == 1){
      for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
          m[i][j] = 0;
        }
      }
      linAtual--;
    }
  
    if (user == 2){
      for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
          m[i][j] = 0;
        }
      }
      linAtual++;
    }
  
    if (user == 3){
      for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
          m[i][j] = 0;
        }
      }
      colAtual--;
    }
  
    if (user == 4){
      for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
          m[i][j] = 0;
        }
      }
      colAtual++;
    }
    
    
  } while (user != 5);
}