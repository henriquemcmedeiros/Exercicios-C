#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  system("clear");
  setlocale(LC_ALL, "Portuguese");
  
  float tempoGasto, velocidadeMedia, distanciaCorrida, litrosUtilizados;

  printf("Digite o tempo gasto da viagem: ");
  scanf("%f" , &tempoGasto);
  
  printf("Digite a velocidade média: ");
  scanf("%f" , &velocidadeMedia);

  distanciaCorrida = tempoGasto * velocidadeMedia;

  litrosUtilizados = distanciaCorrida / 12;

  printf("Velocidade: %.2f \nTempo: %.2f \nDistancia: %.2f \nLitros utilizados: %.2f\n" , velocidadeMedia , tempoGasto , distanciaCorrida , litrosUtilizados);
 
  return 0;
}