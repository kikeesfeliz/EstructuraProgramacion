//Dado el sueldo de un trabajador, aplicarle un 5% de aumento si su sueldo es menor a 10,000 del, 2% si es mayor igual imprimir nuevo sueldo
//Luis Enrique Gamez Burgueño

#include "stdio.h"

main(){

	int sueldo, nuevosueldo;
		printf ("Ingrese sueldo: ");
		scanf ("%i", &sueldo); 
			if (sueldo<10000) {
				nuevosueldo = (sueldo*.05)+sueldo;
				printf ("Total nuevo sueldo con aumento incluido: %i", nuevosueldo);
			} else 
				nuevosueldo = (sueldo*.02)+sueldo;
				printf ("Total nuevo sueldo con aumento incluido: %i", nuevosueldo);
}

	


