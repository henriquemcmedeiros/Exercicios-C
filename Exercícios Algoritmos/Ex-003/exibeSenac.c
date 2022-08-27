#include <stdio.h>

int main(void) {
  int n1;
  printf("Digite um número inteiro: ");
  scanf("%d", &n1);

  if (n1 == 13 || n1 == 26 || n1 == 42 || n1 == 70)
  {
    printf("SENAC");
  }
  else
  {
    printf("Seu número é %d", n1);
  }
  return 0;
}