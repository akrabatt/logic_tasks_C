#include <stdio.h>
#include "find_min_max.h"

int main()
{
	int test_arr[8] = { -1, 8, 4, -7, -3, 2, 6, -2 };
	int test_size = sizeof(test_arr)/sizeof(test_arr[0]);
	min_max str;

	str = find_min_max(test_arr, test_size);
	
	printf("min = %d, max = %d\n", str.min, str.max);
	return 0;
}
