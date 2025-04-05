#ifndef MIN_MAX_H
#define MIN_MAX_H

/**
* struct contain min and max values of array
*/
typedef struct 
{
	int min;
	int max;
}min_max;

/** 
* @param arr inbound array
* @param size inbound array's size
*/
min_max find_min_max(int arr[], int size);

#endif
