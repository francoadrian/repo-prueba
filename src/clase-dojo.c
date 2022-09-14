/*
 ============================================================================
	Ejercicio 5-2:
	Pedir el ingreso de 10 números enteros entre -1000 y 1000.
	Determinar:
	Cantidad de positivos y negativos.
	Sumatoria de los pares.
	El mayor de los impares.
	Listado de los números ingresados.
	Listado de los números pares.
	Listado de los números de las posiciones impares.
	Los números que se repiten
	Los positivos creciente y los negativos de manera decreciente
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define SIZE 10

int main(void) {
	setbuf(stdout, NULL);

	int vector[SIZE];

	cargarVector(vector, SIZE, -1000, 1000);

	printf("\n");

	mostrarPositivosYNegativos(vector, SIZE);

	sumarPares(vector, SIZE);

	mayorImpares(vector, SIZE);

	mostrarVector(vector, SIZE);

	mostrarPares(vector, SIZE);

	mostrarNumerosEnPosicionesImpares(vector, SIZE);

	mostrarNumerosRepetidos(vector, SIZE);

	ordenarPositivosAscendente(vector, SIZE);

	ordenarNegativosDescendente(vector, SIZE);

	return EXIT_SUCCESS;
}
