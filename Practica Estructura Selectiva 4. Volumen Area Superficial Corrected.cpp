//flores hernandez jesus javier

#include "stdio.h"
#include "conio.h"
main ()
{
	float vol,asup,a,b,j,c,r,h;
	const float PI = 3.1416;
	char op;
	
	puts("a cubo)");
	puts("b paralepipedo");
	puts("c esfera");
	puts("d cilindro");
	printf("seleccione:");
	op = getche();
	switch(op)
	{
		case 'a' : printf("lado del cubo");
		scanf("%f", &j);
		vol = j * j * j;
		asup = 6 * j * j;
		break;
		case 'b' : printf(" lado a ");
		scanf("%f", &a);
		printf(" lado b ");
		scanf("%f", &b);
		printf(" lado c ");
		scanf("%f", &c);
		vol = a * b * c;
		asup = 2 * (a*b + a*c + b*c);
		break;
		case 'c' : printf(" radio de la esfera");
		scanf("%f", &r);
		vol = (float) 4 / 3 * PI * r * r * r;
        asup = 4 * PI * r * r;
        break;
        case 'd' : printf("\n radio del clindro");
        scanf("%f", &r);
        printf("\n altura del clindro");
        scanf("%f", &h);
        vol = PI * r * r * h;
        asup = 2 * PI * r * h + 2 * PI * r * r;
	}
	printf("\n volumen: %f", vol);
	printf("\n area superficial: %f", asup);
}
