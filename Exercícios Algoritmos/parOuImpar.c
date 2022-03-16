#include <stdio.h>

int main(void) 
{
  // Entrada de valores
  int n1;
  printf("Digite um  número: ");
  scanf("%d", &n1);
  
  // Saída de dados
  if ((n1 % 2) == 1)
  {
    printf("Seu número é ímpar\n");
  }
  else
  {
    printf("Seu número é par\n");
  }
}