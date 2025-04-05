#include <stdio.h>
#include "reverse.h"

void reverse_array(int arr[], int size)
{
	int beg = 0;
	int end = 0;	
	
	for(int i = 0; i < size / 2; i++)
	{
		beg = arr[i];
		end = arr[size - i - 1];	
		
		arr[i] = end;
		arr[size - i - 1] = beg;
	}
}
