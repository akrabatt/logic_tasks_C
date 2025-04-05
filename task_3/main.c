#include <stdio.h>
#include "replace.h"


int main()
{
	int test_arr[8] = {0, 2, -1, -5, 3, 8, -8, 9};
	int arr_size = sizeof(test_arr)/sizeof(test_arr[0]);
	
	printf("Before replacing:\n");
	for(int i = 0; i < arr_size; i++) { printf("%d ", test_arr[i]); }	
	
	replace_negatives(test_arr, arr_size);

	printf("After replacing:\n");
	for(int i = 0; i < arr_size; i++) { printf("%d ", test_arr[i]); }	
	
	return 0;
}
