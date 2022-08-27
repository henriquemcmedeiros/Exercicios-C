#include <stdio.h>

int main(void) {
  int count = 0;
  int user = 0;
  
  while (count < 5) {
    printf("Digite um número: ");
    scanf("%d", &user);
    
    if ((user % 2) == 0) {
      printf("Par\n");
    }
    else {
      printf("Ímpar\n");
    }
    count++;
  }
}