//El costo de las llamadas telefonicas depende de la zona y de los minutos hablados

//Clave   Zona          Precio
//1     America Norte   2
//2     America Central 2.50
//3     America Sur     4.50
//4     Europa          5.50
//5     Asia            5
//6     Africa          6
//7     Oceania         5


#include "stdio.h"

main (){
	int zona;
	float min, ct;
	printf ("Tiempo en minutos");
	scanf ("%f", &min);
	puts ("1. America del norte");
	puts ("2. America central");
	puts ("3.- America del sur");
	puts ("4.- Europa");
	puts ("5.- Asia");
	puts ("6.- Africa");
	puts ("7.- Oceania");
	printf ("\n Seleciona una zona :");
	scanf ("%d", &zona);
	switch (zona){
		case 1: ct = min * 2.00;
				break;
		case 2: ct = min * 2.50;
				break;
		case 3: ct = min * 4.50;
				break;
		case 4: ct = min * 5.50;
				break;
		case 5: ct = min * 5.00;
				break;
		case 6: ct = min * 6.00;
				break;
		case 7: ct = min * 7.00;
		
	}
	printf ("\n Costo total $ %10.2f", ct);
}
