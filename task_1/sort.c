#ifndef SORT_FILE
#define SORT_FILE

// sort.c
void pars_arr(int arr[], int size) {
    int write_ptr = 0;
    
    // Переносим все ненулевые элементы в начало
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[write_ptr++] = arr[i];
        }
    }
    
    // Заполняем оставшиеся позиции нулями
    while (write_ptr < size) {
        arr[write_ptr++] = 0;
    }
}

#endif
