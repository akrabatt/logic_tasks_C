#include <stdio.h>
#include "find_min_max.h"

min_max find_min_max(int arr[], int size)
{
	min_max res;
	// if arr is empty
	if(size <= 0) { res.min = 0; res.max = 0; return res; }

	int cur_max = arr[0];
	int cur_min = arr[0];
	
	for(int i = 1; i < size; i++)
	{
		if(arr[i] > cur_max) { cur_max = arr[i]; }
		if(arr[i] < cur_min) { cur_min = arr[i]; }
	}

	res.min = cur_min;
	res.max = cur_max;
	
	return res;
}
