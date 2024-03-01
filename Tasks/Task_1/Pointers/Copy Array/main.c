#include <stdio.h>
#include <stdlib.h>

void copyArray(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i);
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int sourceArray[size];
    printf("Enter %d elements for the source array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &sourceArray[i]);
    }

    int destinationArray[size];

    copyArray(sourceArray, destinationArray, size);

    printf("Elements in the destination array: ");
    for (int i = 0; i < size; i++) {
        printf("%d, ", destinationArray[i]);
    }

    return 0;
}

