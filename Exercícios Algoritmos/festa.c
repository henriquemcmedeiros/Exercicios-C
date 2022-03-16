#include <stdio.h>

int main (void)
{
  //Declaração de variáveis
  int QuantHomem, QuantMulher, Total;

  //Entrada de valores
  printf("Insia a quantidade de homens na festa: ");
  scanf("%d", &QuantHomem);

  printf("Insia a quantidade de mulheres na festa: ");
  scanf("%d", &QuantMulher);

  //Processamento
  Total = QuantHomem * 20 + QuantMulher * 17;
  
  //Saída de valores
  printf("%d\n", Total);
}