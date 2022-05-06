#include <stdio.h>

int MAX(int num1, int num2)
{
  if (num1 > num2) {
    return num1;
  }
  else {
    return num2;
  }
}

int main(void) {
  int user1, user2;
  printf("Digite um número: ");
  scanf("%d", &user1);
  printf("Digite um número: ");
  scanf("%d", &user2);
  
  printf("O maior deles é o %d\n", MAX(user1, user2));
  return 0;
}