#include "pars.h"

int count_positive(int arr[], int size)
{
	if(size == 0) { printf("Array is emtpy!\n"); return -1;}

	int pos_int = 0;
	for(int i = 0; i < size; i++)
	{
		if(arr[i] > 0) { pos_int++; }
	}	
	return pos_int;
}
