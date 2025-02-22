#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaración de variables
    float num1, num2, resultado;

    // Solicitar al usuario que ingrese dos números
    printf("Introduce el primer numero: ");
    scanf("%f", &num1);
    
    printf("Introduce el segundo numero: ");
    scanf("%f", &num2);

    // Multiplicar los dos números
    resultado = num1 * num2;

    // Mostrar el resultado
    printf("El resultado de la multiplicaciun es: %.2f\n", resultado);

    system("pause");
    return 0;
}