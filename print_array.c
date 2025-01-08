#include <stdio.h>

void print_array(const int *arr, size_t arr_len) {
    for (int i = 0; i < arr_len; ++i) {
        printf("%d",arr[i]);
        if (i != arr_len - 1) {
            printf(",");
        }
    }
    printf("\n");
}
