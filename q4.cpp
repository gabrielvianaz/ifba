#include <stdio.h>

int main (){
	
	float tempo, velocidade;
	
	printf ("Digite o tempo da viagem\n");
	scanf ("%f", &tempo);
	printf ("Digite a velocidade media\n");
	scanf ("%f", &velocidade);
	
	float distancia = tempo * velocidade;
	float litros = distancia/12;
	
	printf ("A velocidade media foi de %.2fkm/h, o tempo gasto na viagem foi de %.2f horas\nA distancia percorrida foi de %.2fkm e foram utilizados %.2f litros de combustivel", velocidade, tempo, distancia, litros);	
	
	return 0;
	
}
