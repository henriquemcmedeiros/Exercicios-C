#include <stdio.h>

int ParouImpar(int num1)
{
  if ((num1 % 2) == 0) {
    return 10;
  }
  else {
    return 30;
  }
}

int main(void) {
  int user1, user2;
  printf("Digite um número: ");
  scanf("%d", &user1);
  
  printf("%d\n", ParouImpar(user1));
  return 0;
}