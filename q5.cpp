#include <stdio.h>

int main (){
	
	float valor, taxa;
	int tempo;
	
	printf ("Digite o valor da prestacao\n");
	scanf ("%f", &valor);
	printf ("Digite a taxa de juros\n");
	scanf ("%f", &taxa);
	printf ("Digite o tempo de atraso\n");
	scanf ("%i", &tempo);
	
	float prestacao = valor + (valor * taxa/100) * tempo;
	
	printf ("O valor da prestacao com jursos sera: %f", prestacao);	
	
	return 0;
}
