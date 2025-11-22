//Hace run programa que permita calcular el valor de f(x)
//x^2 si xmod4=0
//x^ si xmod4=1
//x/6 si xmod4=2
//2x +5 si xmod4=3

//Luis Enrique Gamez Burgueño

#include "stdio.h"

main(){
	int x, z;
	float y = 0;
	printf("Valor de x: ");
	scanf("%d", &x);
	z = x%4;
	switch(z){
		case 0: y=x*x;
			break;
		case 1: y=x*x*x;
			break;
		case 2: y=(float)x/6;
			break;
		case 3: y=2/x+5;
	}
	printf("\n Resultado %f", y);
	
}
