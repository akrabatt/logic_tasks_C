#include <stdio.h>
#include "sort.h"


int main()
{
	int test_arr[8] = { 8, -3, 6, 4, -2, 5, -7, 11 };
	int arr_size = sizeof(test_arr)/sizeof(test_arr[0]);

	printf("Array before sorting:\n");
	for(int i = 0; i < arr_size; i++) { printf("%d ", test_arr[i]); }
	printf("\n");

	bubble_sort(test_arr, arr_size);
	
	printf("Array after sorting:\n");
	for(int i = 0; i < arr_size; i++) { printf("%d ", test_arr[i]); }
	printf("\n");

	return 0;
}
