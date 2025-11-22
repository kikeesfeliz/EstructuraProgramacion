//Flores Hernandez Jesus Javier
#include <stdio.h>
#include <stdlib.h>
main()
{
	int i, n;
	float x, y = 0;
	bool b = true;
	
	system("color 1f");
	printf("Valor de n");
	scanf("%d", &n);
	printf("Dame el valor de x");
	scanf("%f", &x);
	
	for(i = 1; i <= n; ++i)
	{
		if(b == true)
		{
			 y += x/i;
		}
			
		else
		{
		 	y -= x/i;
			b = true;
		}
		
	}
	printf("\n Resultado %10.2f", y);
	
}
