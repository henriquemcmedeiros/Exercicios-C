#include <stdio.h>

int main(void) 
{
  // Entrada de valores
  int s;
  printf("Digite um  número: ");
  scanf("%d", &s);
  
  // Processamento
  int horas = s / 3600;
  int sHoras = s % 3600;
  int min = sHoras / 60;
  s = sHoras % 60;

  // Saída de dados
  printf("%d horas %d minutos e %d segundos\n", horas, min, s);
}