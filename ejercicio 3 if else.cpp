//Haga un programa que compare dos numeros enteros diferentes y determine cual es el mayor
//Luis Enrique Gamez Burgueño

#include "stdio.h"

main (){
	int a, b;
	printf ("Ingrese el primer numero ");
	scanf ("%d", &a);
	printf ("Ingrese el segundo numero ");
	scanf ("%d", &b);
	if (a>b)
		printf("El mayor es %i", a);
	else
		printf ("El mayor es %i", b);
}

