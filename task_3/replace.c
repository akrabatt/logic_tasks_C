#include <stdio.h>
#include "replace.h"

void replace_negatives(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(arr[i] < 0) { arr[i] = 0; }
	}
}
