// flores hernandez jesus javier

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float distancia(float x1, float y1, float x2, float y2); 

main()
{
	float x1, y1, x2, y2, d;
	system("color 1f");
	printf("\n Coordenada x1 ");
	scanf("%f", &x1);
	printf("\n Coordenada y1 ");
	scanf("%f", &y1);
	printf("\n Coordenada x2 ");
	scanf("%f", &x2);
	printf("\n Coordenada y2 ");
	scanf("%f", &y2);
	
	d = distancia(x1,y1,x2,y2);
	printf("/n Distancia %f", d);
	}	
	
float distancia(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

