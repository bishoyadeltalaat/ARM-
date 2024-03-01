#include <stdio.h>
#include <stdlib.h>

void removeDuplicates(int *arr, int *size) {
    for (int i = 0; i < *size; i++) {
        for (int j = 0; j < *size; j++) {
            if (arr[j] == arr[i] && j != i) {
                for (int k = j; k < *size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                (*size)--;
            }
        }
    }
}


int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter %d elements of an array:\n",size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    removeDuplicates(arr, &size);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
