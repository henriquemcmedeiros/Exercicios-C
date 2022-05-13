#include <stdio.h>

int main(void) {
  int user = 0;
  int count = 0;
  int fatorial = 1;
  int temp = 0;
  
  printf("Digite um número: ");
  scanf("%d", &user);
  temp = user;
  
  do {
    fatorial *= temp;
    temp -= 1;
    count++;
  } while(count < user);
  
  printf("O fatorial é %d\n", fatorial);
}