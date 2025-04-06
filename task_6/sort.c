#include <stdio.h>
#include "sort.h"

void bubble_sort(int arr[], int size)
{
	int cnt = 1;
	int b = 0;
	int a = 0;
	
	while(cnt)
	{
		cnt = 0;

		for(int i = 0; i < size - 1; i++)
		{
			a = arr[i];
			b = arr[i + 1];

			if(arr[i] > arr[i + 1])
			{	
				arr[i] = b;
				arr[i + 1] = a;	
				cnt = 1;
			} 
		}

	}
	
}
