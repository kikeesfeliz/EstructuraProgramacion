//Haga un programa que compare tres numeros enteros diferentes y determine cual es el mayor
//Luis Enrique Gamez Burgueño

#include "stdio.h"

main (){
	int a, b, c;
	printf ("Ingrese el primer numero ");
	scanf ("%d", &a);
	printf ("Ingrese el segundo numero ");
	scanf ("%d", &b);	
	printf ("Ingrese el tercer numero ");
	scanf ("%d", &c);
	if (a>b)
		if (a>c)
			printf("El mayor es %i", a);
		else
			printf("el mayor es %i", c);
	else
	 	if (b>c)
	 		printf("El mayor es %i", b);
	 	else	
	 		printf("El mayor es %i,", c);
	
}
		
