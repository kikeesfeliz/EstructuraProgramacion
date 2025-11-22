//Luis Enrique Gamez Burgueño
//Haga un programa que compare dos numeros enteros diferentes y determine cual es el mayor

#include "stdio.h"

main (){
	float a, b, c;
	printf ("Primer numero ");
	scanf ("%f", &a);
	printf ("Segundo numero ");
	scanf ("%f", &b);
	c = (a+b)*(a+b)/3;
	printf ("Resultado %.2f", c);
	
}
