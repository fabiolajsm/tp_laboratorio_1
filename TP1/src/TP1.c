/*
 ============================================================================
 Alumna:  Fabiola Suárez.
 Comisión: 1h.
 -- Consigna:
 Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
 para ofrecerlos a sus clientes.
 Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
 El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
 	1. Ingresar Kilómetros: ( km=x)
	2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
		- Precio vuelo Aerolíneas:
		- Precio vuelo Latam:
	3. Calcular todos los costos:
		a) Tarjeta de débito (descuento 10%)
		b) Tarjeta de crédito (interés 25%)
		c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
		d) Mostrar precio por km (precio unitario)
		e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
	4. Informar Resultados
		“Latam:
		a) Precio con tarjeta de débito: r
		b) Precio con tarjeta de crédito: r
		c) Precio pagando con bitcoin : r
		d) Precio unitario: r
		Aerolíneas:
		a) Precio con tarjeta de débito: r
		b) Precio con tarjeta de crédito: r
		c) Precio pagando con bitcoin : r
		d) Precio unitario: r
		La diferencia de precio es : r “
	5. Carga forzada de datos
	6. Salir
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main(void) {
	//int kilometros;
	//int precioAerolinea;
	//int precioLatam;
	float optionNumber;
	int validOption;

	validOption = isValidOption(3, "Seleccione una opción:\n1. Ingresar Kilómetros.\n2. Ingresar Precio de Vuelos.\n3. Calcular todos los costos.\n4. Informar Resultados.\n5. Carga forzada de datos.\n6. Salir.\n", "Error. Opción inválida.", &optionNumber);

	if(validOption == 1){
		printf("option: %d", optionNumber);
	}
	//printf("Ingresar Kilómetros:\n");
	//scanf("%d", &kilometros);
	//printf("Ingresar precio Aerolíneas:\n");
	//scanf("%d", &precioAerolinea);
	//printf("Ingresar precio Latam:\n");
	//scanf("%d", &precioLatam);

	// printf("K: %d, A: %d, L: %d", kilometros, precioAerolinea, precioLatam);
	return EXIT_SUCCESS;
}