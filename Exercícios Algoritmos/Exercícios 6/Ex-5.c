#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int user = 0;
  
  while (true) {
    printf("Digite um número múltiplo de 10 ou 3: ");
    scanf("%d", &user);

    if ((user % 10) == 0 || (user % 3) == 0) {
      break;
    }
  }
}