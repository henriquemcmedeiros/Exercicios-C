#include <stdio.h>

int main (void)
{
	float prova1, prova2, média;

	//Entrada das notas
	printf("\t Calculadora de média\n");
	printf("Digite a nota para a primeira prova: ");
	scanf("%f", &prova1);
	printf("Digite a nota para a segunda prova: ");
	scanf("%f", &prova2);
	print("\n");

	//Processamento
	média = (prova1 + prova2) / 2;
	
	//Saída dos resultados
	printf("A sua média é %f", média);
}