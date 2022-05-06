#include <stdio.h>

int MAX(int num1, int num2, float num3)
{
  if (num1 > num2 && num1 > num3) {
    return num1;
  }
  else if (num2 > num3){
    return num2;
  }
  else {
    return num3;
  }
}

int main(void) {
  int user1, user2;
  float user3;
  
  printf("Digite um número: ");
  scanf("%d", &user1);
  printf("Digite um número: ");
  scanf("%d", &user2);
  printf("Digite um número: ");
  scanf("%f", &user3);
  
  printf("O maior deles é o %d\n", MAX(user1, user2, user3));
  return 0;
}