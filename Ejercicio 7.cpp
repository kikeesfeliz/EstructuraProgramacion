//Dado un numero entero, haga un programa que determine si el numero es par, impar o cero.

#include "stdio.h"

main() {
	int x;
	printf ("Dame un numero entero ");
	scanf ("%d", &x);
	if (x==0)
		puts("Es cero");
	else
		if(x%2==0)
		puts("Es par");
	else
		puts("Es impar");

}
