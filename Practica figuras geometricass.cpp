//flores hernadez

#include <stdio.h>
#include <conio.h>

int main() {
    float vol, asup, l, a, b, c, r, h;
    const float PI = 3.1416;
    char op;

    puts("a. Cubo");
    puts("b. Paralelepípedo");
    puts("c. Esfera");
    puts("d. Cilindro");
    printf("Selecciona una opción: ");
    op = getche();
    printf("\n");

    switch (op) {
        case 'a': 
            printf("Lado del cubo: ");
            scanf("%f", &l);
            vol = l * l * l;
            asup = 6 * l * l;
            break;

        case 'b': 
            printf("Lado a: ");
            scanf("%f", &a);
            printf("Lado b: ");
            scanf("%f", &b);
            printf("Lado c: ");
            scanf("%f", &c);
            vol = a * b * c;
            asup = 2 * (a * b + a * c + b * c);
            break;

        case 'c': 
            printf("Radio de la esfera: ");
            scanf("%f", &r);
            vol = (4.0 / 3.0) * PI * r * r * r;
            asup = 4 * PI * r * r;
            break;

        case 'd': 
            printf("Radio del cilindro: ");
            scanf("%f", &r);
            printf("Altura del cilindro: ");
            scanf("%f", &h);
            vol = PI * r * r * h;
            asup = 2 * PI * r * (r + h);
            break;

        default:
            printf("Opción no válida.\n");
            return 1;
    }

    printf("\nVolumen: %.2f\n", vol);
    printf("Área superficial: %.2f\n", asup);

    return 0;
}

