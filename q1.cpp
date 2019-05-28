#include <stdio.h>

int main (){
	
	float celsius;
	
	printf ("Digite a temperatura em Graus Celsius\n");
	scanf ("%f", &celsius);
	
	float fah = (9 * celsius + 160) / 5;
	
	printf ("A temperatura em Fahrenheit eh: %f", fah);
	
	return 0;
}
