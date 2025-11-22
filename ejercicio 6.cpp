//Teniendo como datos la longitud de los lados de un trianguno, definir si es equilatero, isosceles o escaleno.
//Luis Enrique Gamez Burgueño

#include "stdio.h"

main (){
	int a, b, c;
	printf ("Ingrese el valor del primer lado: ");
	scanf ("%i", &a);
	printf ("Ingrese el valor del segundo lado: ");
	scanf ("%i", &b);
	printf ("Ingrese el valor del tercer lado: ");
	scanf ("%i", &c);
		if (a==b)
			if (b==c)
				printf("El triangulo es Equilatero");
			else 
				printf("El triangulo es Isosceles");
		else
			if (b==c)
				printf("El triangulo es Isosceles");
			else
				printf("El triangulo es Escaleno");
				
}
				
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

