#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include "palindrome.h"

bool is_alphab(char alph)
{
	const char alphabet[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'j', 'h',
							  'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
							  'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
							  'y', 'z' };

	int alph_size = sizeof(alphabet)/sizeof(alphabet[0]);
	
	for(int i = 0; i < alph_size; i++)
	{
		if(alph == alphabet[i])
		return 1;
	}
		
	return 0;
}


bool is_palindrome(const char arr[], int size)
{
	int new_size = 0;

	// find arr's size only contain alphs	
	for(int i = 0; i < size - 1; i++)
	{
		if(is_alphab(arr[i]) == true) { new_size++; }	
	}	

	char *filtered = (char*)malloc(sizeof(char) * new_size);
	if(filtered == NULL) { printf("memmory error\n"); return 0; }

	// fill filtered array 
	int j = 0;	
	for(int i = 0; i < size - 1; i++)
	{
		if(is_alphab(arr[i]) == true)
		{
			filtered[j++] = arr[i];
			//printf("%d\n", i);
		}
	}

	//check palindrome
	for(int i = 0; i < new_size / 2; i++)
	{
		if(filtered[i] != filtered[new_size - i - 1]) { return 0; }
	}

	free(filtered);
	return 1;
}
