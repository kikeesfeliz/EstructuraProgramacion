//Construir un programa al cual le demos dado x, calcule el resultado de las funciones 
//y= x^3+x^2-1 si 0<x<=11 
//y= x^2-10 si 11<x<=33
//y= 3x+36 si 33<x<=64
//0 para cualquier otro valor de x

#include "stdio.h"

main (){
	int x,y;
	printf ("Valor de x: ");
	scanf ("%d", &x);
	if ((x>0)&&(x<=11))
		y=x*x*x+x*x-1;
	else
		if((x>11)&&(x<=33))
			y=x*x-10;
		else
			if((x>33)&&(x<=64))
				y=3*x+36;
			else y=0;
	printf("El resultado %d", y);
}
