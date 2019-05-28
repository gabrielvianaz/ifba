#include <stdio.h>

int main (){
	
	float r, h, v, pi = 3.14;
	
	printf ("Digite o raio e a altura\n");
	scanf ("%f %f", &r ,&h);
	
	v = pi * (r*r) * h;
	
	printf ("O volume eh: %.2f", v);
	
	return 0;
}
