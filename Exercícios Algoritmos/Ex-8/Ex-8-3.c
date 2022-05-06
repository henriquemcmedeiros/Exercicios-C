#include <stdio.h>

int EhPrimo(int num1)
{
  int count = 1;
  int soma = 0;
  
  while (count <= num1) {
    if ((num1 % count) == 0)
      soma += count;
    count++;
  }
  if (soma == num1 + 1)
    return 1;
  else
    return 0;
}

int main(void) {
  int user1, user2;
  printf("Digite um número: ");
  scanf("%d", &user1);
  
  printf("%d\n", EhPrimo(user1));
  return 0;
}