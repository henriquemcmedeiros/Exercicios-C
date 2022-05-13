#include <stdio.h>

int main(void) {
  int user = 0;
  int menor = 0;
  int maior = 0;
  int count = 0;

  do {
    printf("Digite um número: ");
    scanf("%d", &user);
    if (count == 0)
    {
      menor = user;
    }
    if (user != 0 && user < menor){
      menor = user;
    }
    if (user > maior){
      maior = user;
    }
    count++;
  } while(user != 0);
  
  printf("A número mais baixo é %d\n", menor);
  printf("A número mais alto é %d\n", maior);
}