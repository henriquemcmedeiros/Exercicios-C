#include <stdio.h>

int main (void)
{
  //Declaração de variáveis
  int a, b, c, delta;

  //Entrada de valores
  printf("Insira o valor de A: ");
  scanf("%d", &a);

  printf("Insira o valor de B: ");
  scanf("%d", &b);

  printf("Insia o valor de C: ");
  scanf("%d", &c);

  //Processamento
  delta = (b*b)-4*a*c;
  
  //Saída de valores
  printf("%d\n", delta);
}