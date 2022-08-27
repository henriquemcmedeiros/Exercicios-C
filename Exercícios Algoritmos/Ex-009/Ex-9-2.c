#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int num[5];
  float media;
  int total = 0;
  
  for (int i = 0; i < 5; i++) {
    printf("Digite um número: ");
    scanf("%d", &num[i]);
    total += num[i];
  }
  media = total / 5;

  printf("A média é %f\n", media);
  printf("O total é %d\n", total);
  
  for (int i = 0; i < 5; i++) {
    if (num[i] > media) {
      printf("%d\n", num[i]);
    }
  }
}