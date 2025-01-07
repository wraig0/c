#include <stdio.h>
#include <stdbool.h>

void print_array(const int *arr, size_t arr_len) {
    for (int i = 0; i < arr_len; ++i) {
        printf("%d",arr[i]);
        if (i != arr_len - 1) {
            printf(",");
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {11,88,0,22,33,44,66,77,55,99};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    bool swapped = false;
    int temp = 0;

    printf("Unsorted: ");
    print_array(arr, arr_len);

    for (int i = 0; i < arr_len - 1; ++i) {
	for (int j = 0; j < arr_len - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
		temp = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = temp;

		swapped = true;
	    }
	}
	if (!swapped) {
	    break;
	}
    }
	
    printf("Sorted: ");
    print_array(arr, arr_len);
    
    return 0;
}

