#include "tp0.h"
#include <stdio.h>


/* *****************************************************************
 *                     FUNCIONES A COMPLETAR                       *
 *         (ver en tp0.h la documentación de cada función)         *
 * *****************************************************************/

void swap (int *x, int *y) {

	int aux = *y;
	*y = *x;
	*x = aux;

}

int maximo(int vector[], int n) {
	int pos_maximo = 0;

	if(n == 0){return -1;}

	for(int i = 1; i < n; i++){
		if(vector[pos_maximo]<vector[i]){
			pos_maximo = i;
		}
	}

	return pos_maximo;

}


int comparar(int vector1[], int n1, int vector2[], int n2) {
	int i = 0;

	while( i < n1 && i < n2){
		if (vector1[i] > vector2[i]){
			return 1;
		}else if (vector2[i] > vector1[i])
		{
			return -1;
		}
		i++;
	}

	if(n1>n2){
		return 1;
	}else if (n2>n1)
	{
		return -1;
	}

	return 0;
}

void seleccion(int vector[], int n) {
	int pos_maximo;

	for(int i = n; i > 0 ; i--){
		pos_maximo = maximo(vector,i);
		swap(&vector[i-1],&vector[pos_maximo]);
		}
}