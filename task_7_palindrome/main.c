#include <stdio.h>
#include <stdbool.h>
#include "palindrome.h"

int main()
{
	char char_arr[] = "K helle H k";
	int arr_size = sizeof(char_arr)/sizeof(char_arr[0]);

	//bool res = is_palindrome(char_arr, arr_size);
	
	printf("%s\n", is_palindrome(char_arr, arr_size) ? "True" : "False");

	return 0;	
}
