/*
 * utils.c
 *
 *  Created on: 15 abr. 2022
 *      Author: fsuarez
 */
#include <stdio.h>
#include <stdlib.h>

float discountDebitA;
float interestCreditA;
float btcA;
float uAirline;
float discountDebitL;
float interestCreditL;
float btcL;
float uLatam;
float priceDifference;

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
void calculatePrices(int km, int airlinePrice, int latamPrice, int console){
	float onebtc = 4606954.55;
	if(km && airlinePrice && latamPrice){
		discountDebitA = airlinePrice - (airlinePrice * 0.10);
		interestCreditA = airlinePrice + (airlinePrice * 0.25);
		discountDebitL = latamPrice - (latamPrice * 0.10);
		interestCreditL = latamPrice + (latamPrice * 0.25);

		btcA = airlinePrice / onebtc;
		btcL = latamPrice / onebtc;
		uLatam = latamPrice / km;
		uAirline = airlinePrice / km;
		priceDifference = airlinePrice - latamPrice ;
		switch(console){
			case 1:
			printf("El precio por km (precio unitario) Latam es: %f\nEl precio por km (precio unitario) Airline es: %f\n", uLatam, uAirline);
			printf("La diferencia de precio ingresada (Latam - Aerolíneas) es: %f\n", priceDifference);
			break;
			case 0:
			break;
		}
	} else {
		printf("No se puede realizar cálculos si no hay vuelos ingresados.\n");
	}
}

void showPrices(int km, int airlinePrice, int latamPrice){
	if(km && airlinePrice && latamPrice && discountDebitL && discountDebitA){
		printf("Latam:\na) Precio con tarjeta de débito: $ %f\nb) Precio con tarjeta de crédito: $ %f\nc) Precio pagando con bitcoin: %f BTC\nd) Precio unitario:$ %f\n", discountDebitL, interestCreditL, btcL, uLatam);
		printf("Aerolíneas:\na) Precio con tarjeta de débito: $ %f\nb) Precio con tarjeta de crédito: $ %f\nc) Precio pagando con bitcoin: %f BTC\nd) Precio unitario:$ %f\n", discountDebitA, interestCreditA, btcA, uAirline);
		printf("La diferencia de precio ingresada (Latam - Aerolíneas) es: $ %f\n", priceDifference);
	} else {
		printf("Para mostrar los precios finales, tienes que calcular todos los costos. Puedes hacerlo seleccionando la opción 3.\n");
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
