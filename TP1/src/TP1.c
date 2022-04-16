/*
 ============================================================================
 Alumna:  Fabiola Suárez.
 Comisión: 1h.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main(void) {
	int showOptions = 1;

	int optionNumber;
	int validOption;

	int kilometres;
	int airlinePrice;
	int latamPrice;

	while(showOptions == 1){
		validOption = isValidOption(3, "Seleccione una opción:\n1. Ingresar Kilómetros.\n2. Ingresar Precio de Vuelos.\n3. Calcular todos los costos.\n4. Informar Resultados.\n5. Carga forzada de datos.\n6. Salir.\n", "Error. Opción inválida.", &optionNumber);

		if(validOption == 1){
			switch(optionNumber){
				case 1:
				 printf("Ingresar Kilómetros:\n");
				 scanf("%d", &kilometres);
					break;
				case 2:
				 printf("Ingresar precio Aerolíneas:\n");
				 scanf("%d", &airlinePrice);
				 printf("Ingresar precio Latam:\n");
				 scanf("%d", &latamPrice);
					break;
				case 3:
				 calculatePrices(kilometres, airlinePrice, latamPrice, 1);
					break;
				case 4:
				 showPrices(kilometres, airlinePrice, latamPrice);
					break;
				case 5:
				 calculatePrices(7090, 162965, 159339, 0);
				 showPrices(kilometres, airlinePrice, latamPrice);
					break;
				case 6:
				 exitOptions(&showOptions, 's');
					break;
			}
		}
	}

	return EXIT_SUCCESS;
}
