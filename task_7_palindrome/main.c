#include <stdio.h>
#include <stdbool.h>
#include "palindrome.h"

int main()
{
	const char char_arr[] = "helle hh";
	int arr_size = sizeof(char_arr)/sizeof(char_arr[0]);

	bool res = is_palindrome(char_arr, arr_size);

	printf("%d\n", res);

	return 0;	
}
