#include <stdio.h>

int main(void) {
  int count = 0;
  int user = 0;
  int soma = 0;
  
  while (count < 10) {
    printf("Digite um número: ");
    scanf("%d", &user);

    soma += user;
    count++;
  }
  printf("A soma de todos os números é igual a: %d\n", soma);
}