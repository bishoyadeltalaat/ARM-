#include <stdio.h>
#include <stdlib.h>

int searchArray(int *array, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (*(array + i) == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int Array[size];
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &Array[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    int result = searchArray(Array, size, target);

    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
