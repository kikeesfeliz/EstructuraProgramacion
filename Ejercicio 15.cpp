//(x-2)-(x+4)+(x-6)-(x+8)+....+(x+-KN)
//  1     2     3     4          n

#include "stdio.h";

main(){
	int i, n, k=2;
	float x, y=0;
	printf ("Valor de n ");
	scanf ("%i", &n);
	printf ("valor de x ");
	for (i=1;i<=n;i++){
		y=(i%2==0)?y-(x+k*1)/i:y+(x-k*i)/i);
	}
	printf("\Resultado %i", y);
	
}
