#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int count = 1;
  int user = 0;
  int maisAlto = 0;
  int code = 0;
  float soma = 0;
  float media = 0;
  int simounao = 0;

  while (true) {
    printf("Digite a altura do %dº atleta: ", count);
    scanf("%d", &user);

    printf("Você quer continuar (1 = S/0 = N): ");
    scanf("%d", &simounao);
    
    soma += user;

    if (user > maisAlto) {
      maisAlto = user;
      code = count;
    }

    if (simounao == 0) {
      break;
    }
    count++;
  }
  media = soma / count;

  printf("A altura do atleta mais alto é %d\n", maisAlto);
  printf("O código do atleta mais alto é %d\n", code);
  printf("A média de altura dos atletas é %f\n", media);
}