#include <stdio.h>
#include <stdlib.h>

void reverseArray(int *array, int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = *(array + i);
        *(array + i) = *(array + size - 1 - i);
        *(array + size - 1 - i) = temp;
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int Array[size];
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &Array[i]);
    }

    reverseArray(Array, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d, ", Array[i]);
    }

    return 0;
}
