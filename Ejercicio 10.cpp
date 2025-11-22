//Una empresa de fumigacion cobra segun el area a fumigar y el tipo de fumigaciones
//Haga un programa que calcule el costo total de la fumigacion
//Tipo 1 $80 m2
//Tipo 2 $100 m2
//Tipo 3 $150 m2
//Tipo 4 $200 m2

//Luis Enrique Gamez Burgueño

#include "stdio.h"

main () {
	float area, ct;
	int tipo;
	printf ("Area que se va a fumigar");
	scanf ("%f", &area);
	puts ("tipo 1, &$80");
	puts ("tipo 2, &$100");
	puts ("tipo 3, &$150");
	puts ("tipo 4, &$200");
	scanf ("%d", &tipo);
	switch (tipo){
		case 1: ct = area * 80;
			break;
		case 2: ct = area * 100;
			break;
		case 3: ct = area * 150;
			break;
		case 4: ct = area * 200;
			break;
		default : ct = 0;
		}
	printf ("costo total $ %10.2f", ct);
	
}
