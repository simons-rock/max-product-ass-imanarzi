#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))
#include "max_product.h"

int max_pairwise_product_naive(int * arr, int size){
	int max = arr[0];
	for(int i = 0; i < size; i++)
		for(int j = 0; j < size; j++)
			max = MAX(max, arr[i]* arr[j]);
	return max;
}
