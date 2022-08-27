#include <stdio.h>

int main(void) {
  int user = 0;
  int temp = 0;
  int count = 0;
  
  // do {
  //   printf("Digite um número: ");
  //   scanf("%d", &user);
  //   if (user < temp){
  //     temp = user;
  //   }
  //   count++;
  // } while(count < 4);
  
  for (int count = 0; count < 5; count++)
  {
    printf("Digite um número: ");
    scanf("%d", &user);
    if (count == 0)
    {
      temp = user;
    }
    if (user < temp)
    {
      temp = user;
    }
    
  }
  printf("A número mais baixo é %d\n", temp);
}