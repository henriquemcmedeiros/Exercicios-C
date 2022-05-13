#include <stdio.h>

int main(void) {
  int count = 1;
  int user = 0;
  int soma = 0;

  printf("Digite um número: ");
  scanf("%d", &user);
  
  while (count <= user) {
    if ((user % count) == 0)
      soma += count;
    count++;
  }
  if (soma == user + 1)
      printf("O número %d é primo\n", user);
  else
      printf("O número %d NÃO é primo\n", user);
}