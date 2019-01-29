#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))
#include "max_product.h"
int max_num(int a, int b){
        if(a > b)
                return a;
        return b;

}
int max_pairwise_product_naive(int * arr, int size){
	int product = 0;
	for(int i = 0; i < size; i++)
		for(int j = i+1; j < size; j++)
			product = max_num(product, arr[i]* arr[j]);
	return product;
}

