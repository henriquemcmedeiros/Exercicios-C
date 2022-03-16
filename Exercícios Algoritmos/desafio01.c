#include <stdio.h>

int main (void)

  //Declaração de variáveis
  int n1, resposta;

  //Entrada de valores
  printf("Insira um número inteiro: ");
  scanf("%d", &n1);

  //Processamento
  resposta = n1 % 2;
  
  //Saída de valores
  printf("%d\n", resposta);
}