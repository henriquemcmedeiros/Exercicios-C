#include <stdio.h>

int main (void)
{
  //Declaração de variáveis
  float l1, l2, area, perimetro;

  //Entrada de valores
  printf("Insira o primeiro lado: ");
  scanf("%f", &l1);

  printf("Insira o primeiro lado: ");
  scanf("%f", &l2);

  //Processamento
  area = l1 * l2 ;
  perimetro = l1 * 2 + l2 * 2;
  
  //Saída de valores
  printf("A area é de: %f\n", area);
  printf("A perimetro é de: %f\n", perimetro);
}