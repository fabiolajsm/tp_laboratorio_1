/*
 * utils.h
 *
 *  Created on: 15 abr. 2022
 *  Author: fsuarez
 */

#ifndef UTILS_H_
#define UTILS_H_

int isValidOption(int retries, char message[], char errorMessage[], int *memorySpace);
void calculatePrices(int km, int airlinePrice, int latamPrice);
void exitOptions( int *memorySpace, char finish);

#endif /* UTILS_H_ */
