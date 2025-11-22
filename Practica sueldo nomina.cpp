//flores hernandez jesus javier
#include "stdio.h"
main()
{
	int i,n;
	float sueldo, ns, tn=0;
	printf ("total de empleados:");
	scanf("%d", &n);
	for(i = 1; i <= n; ++i ) {
  printf("\nsueldo del empleado: ");
  scanf("%f", &sueldo);
  ns = (sueldo < 10000)? sueldo + sueldo * 0.05: sueldo + sueldo * 0.02;
  printf("nuevo sueldo $ %10.2f", ns);
  tn += ns; // tn = tn + ns;
  }
  printf("\ntotal de la nomina $ %10.2f", tn);
}
