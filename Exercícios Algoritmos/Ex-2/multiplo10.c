#include <stdio.h>

int main(void) 
{
  // Entrada de valores
  int n1;
  printf("Digite um  número: ");
  scanf("%d", &n1);
  
  // Saída de dados
  if ((n1 % 10) == 0)
  {
    printf("Seu número é multiplo de 10\n");
  }
  else
  {
    printf("Seu número NÃO é multiplo de 10\n");
  }
}