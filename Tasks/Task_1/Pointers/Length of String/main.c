#include <stdio.h>
#include <stdlib.h>

int findStringLength(char *str) {
    int length = 0;

    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

int main() {
    char String[100];

    printf("Enter a string: ");
    scanf("%s", String);

    int length = findStringLength(String);

    printf("Length of the string: %d\n", length);

    return 0;
}
