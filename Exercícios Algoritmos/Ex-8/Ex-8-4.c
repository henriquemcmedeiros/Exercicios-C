#include <stdio.h>

float CtoF(float num1)
{
  float f;
  
  f = (9 * num1) / 5 + 32;
  return f;
}

int main(void) {
  float user1;
  printf("Digite um número: ");
  scanf("%f", &user1);
  
  printf("%f\n", CtoF(user1));
  return 0;
}