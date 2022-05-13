#include <stdio.h>

int main(void) {
  int l1, l2, l3;
  printf("Digite o primeiro lado: ");
  scanf("%d", &l1);
  
  printf("Digite o segundo lado: ");
  scanf("%d", &l2);
  
  printf("Digite o terceiro lado: ");
  scanf("%d", &l3);


  if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1)
  {
    printf("É possivel formar um triangulo\n");
    if (l1 == l2 && l1 == l3 && l3 == l2)
    {
      printf("O triângulo é EQUILÁTERO\n");
    }
    else
    {
      if (l1 == l2 || l1 == l3 || l2 == l3)
      {
        printf("O triângulo é ISÓSCELES\n");
      }
      else
      {
        printf("O triângulo é ESCALENO\n");
        if ((l1 * l1) == l2 * l2 + l3 * l3 || (l2 * l2) == l1 * l1 + l3 * l3 || (l3 * l3) == l1 * l1 + l2 * l2)
        {
          printf("O triangulo é Retângulo\n");
        }
      }
    }
  }
  else
  {
    printf("Não é possivel  formar um triângulo\n");
  }
  return 0;
}