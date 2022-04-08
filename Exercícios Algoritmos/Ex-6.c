#include <stdio.h>

int main(void) {
  int count = 1;
  int user = 0;

  printf("Digite um número: ");
  scanf("%d", &user);
  
  while (count <= user) {
    if ((user % count) == 0)
      printf("%d\n", count);
    count++;
  }
}