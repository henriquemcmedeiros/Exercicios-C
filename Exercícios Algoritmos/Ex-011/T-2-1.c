#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define pi 3.14

double lerComp(); // ler comprimento
double calcDiam ( double comp );
double calcRaio ( double Diam );
double calArea  ( double raio );
void mostrar (double comp, double diam, double raio, double area);
void controle (); // coloca o menu ai dentro

int main()
{  
  setlocale(LC_ALL, "Portuguese");
  controle();
  return 0;
}

double lerComp()
{
  double comp;
  printf("Digite o Comprimento: ");
  scanf("%lf", &comp);
  return comp;
}

double calcDiam (double comp)
{
  double diam = comp / pi;
  return diam;
}

double calcRaio (double diam)
{
  double raio = diam / 2;
  return raio;
}

double calArea  (double raio)
{
  double area = pi * (raio * raio);
  return area;
}

void mostrar (double comp,double diam,double raio,double area)
{
  printf("Através do comprimento %.3lf podemos concluir que o diâmetro é %.3lf, o raio é %.3lf e a área é %.3lf\n", comp, diam, raio, area);
  system("sleep 5");
}

void controle ()
{
  int item;
  double comp, diam, raio, area = 0;
  while (item != 4){  // ponto de repetição
    system("clear");
    printf("[1] Ler\n[2] Calcular\n[3] Exibir\n[4] Sair\nItem: ");
    scanf("%i",&item);
    
    if (item == 1)
    {
      comp = lerComp();
    }
    else if (item == 2)
    {
      diam = calcDiam(comp);
      raio = calcRaio(diam);
      area = calArea(raio);
    }
    else if (item == 3)
    {
      mostrar(comp, diam, raio, area);
    }
    else if (item == 4)
    {
      exit(0);
    }
  }
} // fim de controle