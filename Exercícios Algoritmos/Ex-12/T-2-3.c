#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void controle();
double pegarBase();
double pegarAltura();
double calcArea(double base, double altura);
void mostrar (double base, double altura, double area);

int main (void) {
  setlocale(LC_ALL, "Portuguese");
  controle();
  return 0;
}

double pegarBase() {
  double base;
  printf("Digite a base: ");
  scanf("%lf", &base);
  gets();
  return base;
}

double pegarAltura() {
  int altura;
  printf("Digite a altura: ");
  scanf("%i", &altura);
  gets();
  return altura;
}

double calcArea(double base, double altura){
  double area = base * altura / 2;
  return area;
}

void mostrar(double base, double altura, double area) {
  printf("Com a base %lf e altura %lf temos a área de %lf\n", base, altura, area);
  system("sleep 5");
}

void controle()
{
  int item;
  double base, altura, area = 0;
  while (item != 4){  // ponto de repetição
    system("clear");
    printf("[1] Ler\n[2] Calcular\n[3] Exibir\n[4] Sair\nItem: ");
    scanf("%i",&item);
    
    if (item == 1) {
      base = pegarBase();
      altura = pegarAltura();
    }
    else if (item == 2) {
      area = calcArea(base, altura);
    }
    else if (item == 3) {
      mostrar(base, altura, area);
    }
    else if (item == 4)
    {
      exit(0);
    }
  }
}