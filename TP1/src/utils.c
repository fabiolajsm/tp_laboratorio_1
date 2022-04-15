/*
 * utils.c
 *
 *  Created on: 15 abr. 2022
 *      Author: fsuarez
 */
#include <stdio.h>
#include <stdlib.h>

int isValidOption(int retries, char message[], char errorMessage[], int *memorySpace){
	int buffer;
	int rtn = 1;
	int i;

	for (i = 0; i < retries; i++){
		printf("\n%s", message);
		scanf("%d", &buffer);

		if(buffer == 1 || buffer == 2 || buffer == 3 || buffer == 4 || buffer == 5 || buffer == 6) {
			(*memorySpace) = buffer;
			i = retries;
		} else {
			printf("\n%s", errorMessage);
			rtn = 0;
		}
	}
	return rtn;
}

// Calcular todos los costos:
//) Tarjeta de débito (descuento 10%)
//) Tarjeta de crédito (interés 25%)
//) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
//) Mostrar precio por km (precio unitario)
//) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
