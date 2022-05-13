#include <stdio.h>

int main(void) {
  int n1;
  printf("Digite um número inteiro: ");
  scanf("%d", &n1);

  if (n1 > 80 || n1 < 25 || n1 == 40)
  {
    printf("Seu número é incrivel");
  }
  else
  {
    printf("Seu número é %d", n1);
  }
  return 0;
}