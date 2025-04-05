#include <stdio.h>
#include "reverse.h"

int main()
{
	int test_arr[8] = { 1, -6, 0, 3, 8 , 3, 5, -7 };
	int arr_size = sizeof(test_arr)/sizeof(test_arr[0]);
	printf("Before reverse:\t");
	for(int i = 0; i < arr_size; i++) { printf("%d ", test_arr[i]); }
	printf("\n");
	
	reverse_array(test_arr, arr_size);

	printf("After reverse:\t");
	for(int i = 0; i < arr_size; i++) { printf("%d ", test_arr[i]); }
	printf("\n");

	return 0;
}
