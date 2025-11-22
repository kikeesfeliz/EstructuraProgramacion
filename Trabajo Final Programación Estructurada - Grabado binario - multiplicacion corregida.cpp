#include "stdio.h"
#include "ctype.h"
#include "stdlib.h"

#define MAX 10

void leer_matriz (int n, int matriz[MAX][MAX]);
void escribir_matriz (int n, int matriz[MAX][MAX]);
void sumar_matrices (int n);
void restar_matrices (int n);
void multiplicar_matrices (int n);
void transponer_matriz (int n);
void guardar_archivo (int n);
void leer_archivo (int n);
void usar_determinante (int n);
int calcular_determinante (int n ,int matriz[MAX][MAX]);

int main(){
	int n = 0, matriz[MAX][MAX];
	char op;
	system ("color 06");
	
	do{
		printf("\nIngresa la dimension de la matriz n x n (maximo 10x10): ");
		scanf("%d" , &n);
		
		fflush(stdin);
		
		while (n <= 0 || n > 10){
			printf("\nEntrada invalida, debe ser un entero positivo entre 1 y 10, ingresa n: ");
			scanf("%d" , &n);
		}

		fflush(stdin);
		
		do {
			fflush(stdin); 
			
			printf("\nMenu de opciones: \n");
			puts("A. Leer y sumar dos matrices.");
			puts("B. Leer y restar dos matrices");
			puts("C. Leer y multiplicar dos matrices");
			puts("D. Leer y transponer una matriz");
			puts("E. Guardar la matriz en un archivo.");
			puts("F. Leer la matriz de un archivo.");
			puts("G. Calcular determinante de una matriz."); 
			puts("H. Salir del programa.");
		
			printf("\nIngresa la letra correspondiente a la opción que deseas ejecutar: ");
			op = tolower(getchar());
		
			switch(op){
				case 'a' : sumar_matrices(n); n = 0; break;
				case 'b' : restar_matrices(n); n = 0; break;
				case 'c' : multiplicar_matrices(n); n = 0; break;
				case 'd' : transponer_matriz(n); n = 0; break;
				case 'e' : guardar_archivo(n); n = 0; break;
				case 'f' : leer_archivo(n); n = 0; break;
				case 'g' : usar_determinante(n); n = 0; break;
				case 'h' : printf("\nSaliendo del programa..."); n = 0; break;
				default  : printf("\nOpcion invalida, intentalo de nuevo por favor.\n");
			}
		} while(n != 0);
	} while (op != 'h');

	return 0;
}

void leer_matriz (int n, int matriz[MAX][MAX]){
	int i , j;
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++) {
			printf("\nIngresa el valor %d , %d : \n", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}	
	}
}

void escribir_matriz (int n, int matriz[MAX][MAX]){
	int i, j;
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++) {
			printf("%d  ", matriz[i][j]);
		}
		printf("\n");	
	}
}

void sumar_matrices (int n){
	int i, j, C[MAX][MAX], A[MAX][MAX], B[MAX][MAX];
	
	printf("\nAlimentando la primer matriz: \n");
	leer_matriz(n, A);
	printf("\nAlimentando la segunda matriz: \n");
	leer_matriz(n, B);
	
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			C[i][j] = A[i][j] + B[i][j];

	printf("\nMatriz resultado de la suma: \n");
	escribir_matriz(n, C);
}

void restar_matrices (int n){
	int i, j, C[MAX][MAX], A[MAX][MAX], B[MAX][MAX];
	
	printf("\nAlimentando la primer matriz: \n");
	leer_matriz(n, A);
	printf("\nAlimentando la segunda matriz: \n");
	leer_matriz(n, B);
	
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			C[i][j] = A[i][j] - B[i][j];

	printf("\nMatriz resultado de la resta: \n");
	escribir_matriz(n, C);
}

void multiplicar_matrices(int n){
    int i, j, k, A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    printf("\nAlimentando la primera matriz:\n");
    leer_matriz(n, A);
    printf("\nAlimentando la segunda matriz:\n");
    leer_matriz(n, B);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            C[i][j] = 0;

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            for(k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    printf("\nMatriz resultado de la multiplicación:\n");
    escribir_matriz(n, C);
}



void transponer_matriz (int n){
	int i, j, T[MAX][MAX], A[MAX][MAX];
	leer_matriz(n, A);
	printf("\nTransponiendo la matriz...\n");
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			T[j][i] = A[i][j];

	escribir_matriz(n, T);	
}

void guardar_archivo(int n) {
	int A[MAX][MAX];
	FILE *archivo;

	leer_matriz(n, A);
	archivo = fopen("matriz.bin", "wb");

	if (archivo != NULL) {
		int elementosEscritos = 0;
		for (int i = 0; i < n; i++) {
			elementosEscritos += fwrite(A[i], sizeof(int), n, archivo);
		}

		if (elementosEscritos < n * n) {
			printf("\nError al escribir en el archivo.\n");
		} else {
			printf("\nSe ha guardado la matriz en el archivo matriz.bin\n");
		}
		fclose(archivo);
	} else {
		printf("\nError al abrir el archivo.\n");
	}
}

void leer_archivo(int n) {
	int A[MAX][MAX];
	FILE *archivo;

	archivo = fopen("matriz.bin", "rb");

	if (archivo != NULL) {
		int elementosLeidos = 0;
		for (int i = 0; i < n; i++) {
			elementosLeidos += fread(A[i], sizeof(int), n, archivo);
		}

		if (elementosLeidos < n * n) {
			printf("\nError al leer el archivo.\n");
		} else {
			printf("\nMatriz leída desde el archivo:\n");
			escribir_matriz(n, A);
		}
		fclose(archivo);
	} else {
		printf("\nError al abrir el archivo.\n");
	}
}

int calcular_determinante(int n, int A[MAX][MAX]){
	int i, j, a, indice_fila, indice_columna, det = 0;
	int submatriz[MAX][MAX];
	
	if (n == 1)
		return A[0][0];

	if (n == 2)
		return (A[0][0] * A[1][1]) - (A[1][0] * A[0][1]);

	for (a = 0; a < n; a++){
		indice_fila = 0;
		for (i = 1; i < n; i++){
			indice_columna = 0;
			for (j = 0; j < n; j++){
				if (j != a){
					submatriz[indice_fila][indice_columna++] = A[i][j];
				}	
			}
			indice_fila++;
		}
		if (a % 2 == 0)
			det += A[0][a] * calcular_determinante(n - 1, submatriz);
		else
			det -= A[0][a] * calcular_determinante(n - 1, submatriz);
	}
	return det;
}

void usar_determinante(int n){
	int det, A[MAX][MAX];
	leer_matriz(n, A);
	det = calcular_determinante(n, A);
	printf("\nEl determinante es: %d \n", det);
}

