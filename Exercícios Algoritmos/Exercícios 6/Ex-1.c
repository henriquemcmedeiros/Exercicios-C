#include <stdio.h>

int main(void) {
  int count = 0;
  int user = 0;
  int soma = 0;
  
  printf("Digite um número: ");
  scanf("%d", &user);
  
  while (count < user) {
    if ((user % count) == 0) {
      soma += count;
    }
    count++;
  }

  if (soma == user) {
    printf("Esse número é perfeito\n");
  }
  else {
    printf("Esse número não é perfeito\n");
  }
}