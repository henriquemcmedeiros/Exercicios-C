#include <stdio.h>

int main(void) {
  int count = 0;
  int user = 0;
  int temp = 0;
  
  while (count < 5) {
    printf("Digite a altura do %dº atleta: ", count + 1);
    scanf("%d", &user);
    if (user > temp){
      temp = user;
    }
    count++;
  }

  printf("A altura do atleta mais alto é %d\n", temp);
}