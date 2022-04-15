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
//a) Tarjeta de débito (descuento 10%)
//b) Tarjeta de crédito (interés 25%)
//c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
//d) Mostrar precio por km (precio unitario)
//e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
void calculatePrices(int km, int airlinePrice, int latamPrice){
	float onebtc = 4606954.55;

	if(km != NULL && airlinePrice != NULL && latamPrice != NULL){
		// a)
		float discountDebitA = airlinePrice - (airlinePrice * 0.10);
		float discountDebitL = latamPrice - (latamPrice * 0.10);
		float discountCreditA = airlinePrice - (airlinePrice * 0.25);
		float discountCreditL = latamPrice - (latamPrice * 0.25);
		// b)
		float btcA = airlinePrice / onebtc;
		float btcL = latamPrice / onebtc;
		// d) unit price per m
		int totalAirline = km * airlinePrice;
		int totalLatam = km * latamPrice;
		printf("El precio por km (precio unitario) Latam es: %f\nEl precio por km (precio unitario) Airline es: %f\n", totalLatam, totalAirline);
		// e) price difference
		float priceDifference = totalLatam - totalAirline;
		printf("La diferencia de precio ingresada (Latam - Aerolíneas) es: %f\n", priceDifference);
	} else {
		printf("Para calcular los precios finales, deberás ingresar por cada vuelo los km totales y el precio total del mismo. Puedes ingresarlos haciendo click en la opción 1 y 2.\n");
	}
}

void exitOptions(float *memorySpace, char finish){
	if(memorySpace != NULL && finish){
		if(finish == 's'){
			*memorySpace = (int) 1;
		} else {
			*memorySpace = (int) 0;
		}
	}
}
