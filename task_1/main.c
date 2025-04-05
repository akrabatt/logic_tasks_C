// main.c (обновленный)
#include <stdio.h>
#include "sort.h"

int main() {
    int test_arr[] = {0, 1, 0, 3, 12};
    int size = sizeof(test_arr)/sizeof(test_arr[0]);
    
    pars_arr(test_arr, size);
    
    printf("Result: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", test_arr[i]);
    }
    return 0;
}
