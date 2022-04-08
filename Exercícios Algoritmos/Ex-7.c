#include <stdio.h>

int main(void) {
  int count = 1;
  int user = 0;

  while (user > 20 || user < 10) {
    printf("Digite um número: ");
    scanf("%d", &user);
  }
  printf("%d\n", user);
}