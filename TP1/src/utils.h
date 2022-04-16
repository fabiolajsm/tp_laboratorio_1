/*
 * utils.h
 *
 *  Created on: 15 abr. 2022
 *  Author: fsuarez
 */

#ifndef UTILS_H_
#define UTILS_H_

/// @fn esta función se encarga de pedirle al usuario una opción del menú y verificar si esta es válida.
/// @param retries
/// @param message[]
/// @param errorMessage[]
/// @param memorySpace
/// @return retorna 1 si es válida y 0 si no lo es.
int isValidOption(int retries, char message[], char errorMessage[], int *memorySpace);
/// @fn esta función se encarga de calcular todos los costos.
/// @param km
/// @param airlinePrice
/// @param latamPrice
/// @param console
/// @return void porque solo imprime la información, no retorna nada.
void calculatePrices(int km, int airlinePrice, int latamPrice, int console);
/// @fn esta función se encarga de mostrar en consola todos los costos, si previamente ya estaban calculados.
/// @param km
/// @param airlinePrice
/// @param latamPrice
/// @return void porque solo imprime la información, no retorna nada.
void showPrices(int km, int airlinePrice, int latamPrice);
/// @fn esta función detiene o inicia el menú de opciones.
/// @param memorySpace
/// @param finish
void exitOptions( int *memorySpace, char finish);

#endif /* UTILS_H_ */
