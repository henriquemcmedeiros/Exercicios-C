#include <stdio.h>

int main(void) 
{
  //Declaração de variáveis

  float km, l, cons;
  
  //Entrada da kilometragem e litros
  printf("Insira os quilometros percorridos: ");
  scanf("%f", &km);
  printf("\n");

  printf("Insira a quantidade de litros que foram gastos: ");
  scanf("%fm", &l);
  printf("\n");

  //Processamento
  cons = km / l;

  //Saída
  printf("O consumo foi foi de %f", cons);
  return 0;
}