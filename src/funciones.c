#include <stdio.h>
#include <stdlib.h>

int pedirValidos(int minimo, int maximo){

	int numeroIngresado;

	printf("Ingresar número: ");
	scanf("%d", &numeroIngresado);
	while(numeroIngresado < minimo || numeroIngresado > maximo){
		printf("Número entre %d y %d. Reingresar: ", minimo, maximo);
		scanf("%d", &numeroIngresado);
	}

	return numeroIngresado;
}

void mostrarVector(int vector[], int SIZE){

	printf("Los números ingresados fueron: \n");

	for(int i = 0; i < SIZE; i++){
		if(i == SIZE - 1){
			printf("%d.\n", vector[i]);
		}else{
			printf("%d, ", vector[i]);
		}
	}
}

void cargarVector(int vector[], int SIZE, int minimo, int maximo){
	for(int i = 0; i < SIZE; i++){
		vector[i] = pedirValidos(minimo, maximo);
	}
}

void mostrarPositivosYNegativos (int vector[], int SIZE){
	int cantPositivos = 0;
	int cantNegativos = 0;
	int cantCeros = 0;

	for(int i=0; i<SIZE; i++){
		if(vector[i] > 0){
			cantPositivos++;
		}else{
			if(vector[i] < 0){
				cantNegativos++;
			}else{
				cantCeros++;
			}
		}
	}
	if(cantPositivos != 0){
		printf("La cantidad de números positivos es: %d.\n", cantPositivos);
	}else{
		printf("No se ingresaron números positivos.\n");
	}
	if(cantNegativos != 0){
		printf("La cantidad de números negativos es: %d.\n", cantNegativos);
	}else{
		printf("No se ingresaron números negativos.\n");
	}
	if(cantCeros != 0){
		printf("La cantidad de ceros es: %d.\n", cantCeros);
	}
}

void sumarPares(int vector[], int SIZE){
	int acumuladorPares = 0;
	int existenPares = 0;

	for(int i=0; i<SIZE; i++){
		if(vector[i] % 2 == 0){
			acumuladorPares += vector[i];
			existenPares = 1;
		}
	}
	if(existenPares == 1){
		printf("La suma de los pares es: %d.\n", acumuladorPares);
	}else{
		printf("No se ingresaron números pares.\n");
	}
}

void mayorImpares(int vector[], int SIZE){
	int primerImpar = 0;
	int mayorImpar;
	int existeImpar = 0;

	for(int i=0; i<SIZE; i++){
			if(vector[i] % 2 != 0){
				if(primerImpar == 0){
					mayorImpar = vector[i];
					primerImpar = 1;
					existeImpar = 1;
				}else{
					if(vector[i] > mayorImpar){
						mayorImpar = vector[i];
				}
			}
		}
	}
	if(existeImpar == 0){
		printf("No se ingresaron números impares.\n");
	}else{
		printf("El mayor de los números impares es: %d.\n", mayorImpar);
	}
}

void mostrarPares(int vector[], int SIZE){
	int a = 0;
	int vectorPares[a];
	int existenPares = 0;

	for(int i=0; i<SIZE; i++){
		if(vector[i] % 2 == 0){
			if(vector[i] != 0){
				vectorPares[a] = vector[i];
				a++;
				existenPares = 1;
			}
		}
	}

	if(existenPares == 1){
		printf("Los pares ingresados fueron: \n");
		for(int i=0; i<a; i++){
			if(i == a-1){
				printf("%d.\n", vectorPares[i]);
			}else{
				printf("%d, ", vectorPares[i]);
			}
		}
	}else{
		printf("No se ingresaron números pares.\n");
	}
}

void mostrarNumerosEnPosicionesImpares (int vector[], int SIZE){
	printf("Los números en posiciones impares fueron: \n");
	for(int i=0; i < SIZE; i++){
		if(i % 2 != 0){
			if(i == SIZE -1){
				printf("%d.\n", vector[i]);
			}else{
				printf("%d, ", vector[i]);
			}
		}
	}
}

void ordenarPositivosAscendente(int vector[], int SIZE){
	int a;
	int aux;
	int b = 0;
	int vectorOrdenable[b];
	int existenPositivos = 0;


	for(int i = 0; i < SIZE; i++){
		if(vector[i] > 0){
			vectorOrdenable[b] = vector[i];
			b++;
			existenPositivos = 1;
		}
	}

	for(int i = 0; i < b-1; i++){
		for(a = i+1; a < b; a++){
			if(vectorOrdenable[i] > vectorOrdenable[a]){
				aux = vectorOrdenable[i];
				vectorOrdenable[i] = vectorOrdenable[a];
				vectorOrdenable[a] = aux;
			}
		}
	}

	if(existenPositivos == 1){
		printf("La lista de positivos ordenados de forma ascendente es:\n");
		for(int i = 0; i < b; i++){
			if(i == b-1){
				printf("%d.\n", vectorOrdenable[i]);
			}else{
				printf("%d, ", vectorOrdenable[i]);
			}
		}
	}else{
		printf("No se cargaron números positivos.\n");
	}
}

void ordenarNegativosDescendente(int vector[], int SIZE){
	int a;
	int aux;
	int b = 0;
	int vectorOrdenable[b];
	int existenNegativos = 0;


	for(int i = 0; i < SIZE; i++){
		if(vector[i] < 0){
			vectorOrdenable[b] = vector[i];
			b++;
			existenNegativos = 1;
		}
	}

	for(int i = 0; i < b-1; i++){
		for(a = i+1; a < b; a++){
			if(vectorOrdenable[i] < vectorOrdenable[a]){
				aux = vectorOrdenable[i];
				vectorOrdenable[i] = vectorOrdenable[a];
				vectorOrdenable[a] = aux;
			}
		}
	}

	if(existenNegativos == 1){
		printf("La lista de negativos ordenados de forma descendente es:\n");
		for(int i = 0; i < b; i++){
			if(i == b-1){
				printf("%d.\n", vectorOrdenable[i]);
			}else{
				printf("%d, ", vectorOrdenable[i]);
			}
		}
	}else{
		printf("No se cargaron números negativos.\n");
	}
}

void mostrarNumerosRepetidos(int vector[], int SIZE){
	int b = 0;
	int nuevoVector[b];
	int existenRepetidos = 0;

	for(int i = 0; i < SIZE; i++){
		for(int a = i+1; a < SIZE; a++){
			if(vector[i] == vector[a]){
				nuevoVector[b] = vector[i];
				b++;
				existenRepetidos = 1;
			}
		}
	}

	if(existenRepetidos == 1){
		printf("Los números repetidos fueron: \n");
		for(int i = 0; i < b; i++){
			if(i == b-1){
				printf("%d.\n", nuevoVector[i]);
			}else{
				printf("%d, ", nuevoVector[i]);
			}
		}
	}else{
		printf("No se ingresaron números repetidos.");
	}
}
