/*
 * utils.c
 *
 *  Created on: 15 abr. 2022
 *      Author: fsuarez
 */
#include <stdio.h>
#include <stdlib.h>

int isValidOption(int retries, char message[], char errorMessage[], float *memorySpace){
	int response;
	int rtn = 1;

	if(retries >= 0 && message != NULL && errorMessage != NULL){
		printf("\n%s", message);
		scanf("%d", &response);

		do {
			if(response == 1 || response == 2 || response == 3 || response == 4 || response == 5 || response == 6){
				(*memorySpace) = response;
				retries = -1;
			} else {
				rtn = 0;
				retries--;
				printf("\n%s", errorMessage);
			}
		} while(retries >= 0);
	}
	return rtn;
}

