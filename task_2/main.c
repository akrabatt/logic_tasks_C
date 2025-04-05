#include <stdio.h>
#include "pars.h"

int main()
{
	int test_arr[10] = {1, 0, -2, -8, 4, 1, -4, 0, 2, -1};
	int arr_size = sizeof(test_arr)/sizeof(test_arr[0]);
	
	int pos_val = count_positive(test_arr, arr_size);
	if(pos_val == -1) { printf("Error, array is empty!\n"); }
	else { printf("positiv nums: %d\n", pos_val); }

	return 0;
}
