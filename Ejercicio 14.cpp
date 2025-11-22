//Escriba un programa que calcula lo que hay que pagarle a un trabajador teniendo en cuenta su sueldo y las horas extras trabajadas
//El pago de horas extras se hace segun su categoria del trabajador
//Categoria del trabajador   Precio horas extra
//        1                      $10
//        2                      $20
//        3                      $30
//        4                      $40
//A los trabajadores con categorias mayores a 4 no se les paga horas extra
//Cada trabajador puede tener como maximo 30 horas extras aunque sean mas, se les pagan 30

#include "stdio.h"

main(){
	int cat, he;
	float sueldo, phe, pf=0;
	printf("Sueldo del trabajador: ");
	scanf("%f", &sueldo);
	puts("Categoria 1 $10.00");
	puts("Categoria 2 $20.00");
	puts("Categoria 3 $30.00");
	puts("Categoria 4 $40.00");
	printf("Selecciona una categoria");
	scanf("%d", &cat);
	switch (cat){
		case 1: phe=10.00;
			break;
		case 2: phe=20.00;
			break;
		case 3: phe=30.00;
			break;
		case 4: phe=40.00;
			break;
		default: phe=0.00;
	}
	printf("\n horas extras");
	scanf ("%d", &he);
	pf=(he>30)?sueldo+phe*30:sueldo+phe*he;
	printf("\n Final &%10.2", pf);
}
