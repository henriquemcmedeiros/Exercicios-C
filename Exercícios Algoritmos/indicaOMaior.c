#include <stdio.h>

int main(void) 
{
  // Entrada de valores
  int n1, n2;
  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  printf("Digite o segundo número: ");
  scanf("%d", &n2);
  
  // Saída de dados
  if (n1 == n2)
  {
    printf("O primeiro e o segundo número são iguais\n");
  }
  else
  {
    if (n1 > n2)
    {
      printf("O primeiro número é maior que o segundo\n");
    }
    else
    {
      printf("O segundo número é maior que o primeiro\n");
    }
  }
}