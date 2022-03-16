#include <stdio.h>

int main(void) {
  int n1;
  printf("Digite um número inteiro: ");
  scanf("%d", &n1);

  if (n1 > 15 && n1 < 25 || n1 > 45 && n1 < 50)
  {
    printf("ERRO");
  }
  else
  {
    printf("Seu número é %d", n1);
  }
  return 0;
}