#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void controle();
double pegarJuros();
int pegarPeriodo();
double pegarMont();
double calcCapital(double mont, int periodo, double juros);
void mostrar (double juros, int periodo, double mont, double capital);

int main (void) {
  setlocale(LC_ALL, "Portuguese");
  controle();
  return 0;
}

double pegarJuros() {
  double juros;
  printf("Digite a taxa de juros: ");
  scanf("%lf", &juros);
  gets();
  return juros;
}

int pegarPeriodo() {
  int periodo;
  printf("Digite a quantidade de meses: ");
  scanf("%i", &periodo);
  gets();
  return periodo;
}

double pegarMont() {
  double mont;
  printf("Digite o montante: ");
  scanf("%lf", &mont);
  gets();
  return mont;
}

double calcCapital(double mont, int periodo, double juros){
  double capital = (mont * 100) / (periodo * juros);
  return capital;
}

void mostrar(double juros, int periodo, double mont, double capital) {
  printf("Com a aplicação rendendo %d meses com juros de %.2lf porcento para ter %.2lf Reais é necessário um cápital inicial de %.2lf\n", periodo, juros, mont, capital);
  system("sleep 5");
}

void controle()
{
  int item;
  double juros, periodo, mont, capital = 0;
  while (item != 4){  // ponto de repetição
    system("clear");
    printf("[1] Ler\n[2] Calcular\n[3] Exibir\n[4] Sair\nItem: ");
    scanf("%i",&item);
    
    if (item == 1) {
      juros = pegarJuros();
      periodo = pegarPeriodo();
      mont = pegarMont();
    }
    else if (item == 2) {
      capital = calcCapital(mont, periodo, juros);
    }
    else if (item == 3) {
      mostrar(juros, periodo, mont, capital);
    }
    else if (item == 4)
    {
      exit(0);
    }
  }
}