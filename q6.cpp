#include <stdio.h>

int main (){
	
	int a, b, aux;
	
	printf ("Digite os valores de A e B\n");
	scanf ("%i %i", &a, &b);
	
	aux = a;
	a = b;
	b = aux;		
	
	printf ("O valor de A eh %i e o valor de B eh %i", a,b);
	
	return 0;
}
