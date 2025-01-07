#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[] = {11,88,0,22,33,44,66,77,55,99};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    bool swapped = false;
    int i = 0;
    int j = 0;
    int k = 0;
    int temp = 0;

    printf("Unsorted: ");
    for (k = 0; k < arr_len; ++k) {
        printf("%d,",arr[k]);
    }
    printf("\n");

    for (i = 0; i < arr_len - 1; ++i) {
	for (j = 0; j < arr_len - i - 1; ++j) {
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
    for (int k = 0; k < arr_len; ++k) {
        printf("%d,",arr[k]);
    }
    printf("\n");
    
    return 0;
}

