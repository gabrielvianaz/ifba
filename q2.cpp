#include <stdio.h>

int main (){
	
	float fah;
	
	printf ("Digite a temperatura em Fahrenheit\n");
	scanf ("%f", &fah);
	
	float celsius = (fah - 32) * (5.0/9);
	
	printf ("A temperatura em Celsius eh: %f", celsius);
		
	return 0;
}
