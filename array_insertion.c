#include <stdio.h>

int main() {
    int score[10] = {2, 4, 6, 8, 12};
    int length = 5;
    int position = 4;
    int new_number = 10;

    // Shift elements to the right
    for (int i = length; i > position; i--) {
        score[i] = score[i - 1];
    }

    // Insert the new element
    score[position] = new_number;

    // Increase the number of elements
    length++;

    // Display the array
    printf("Array after insertion: ");

    for (int i = 0; i < length; i++) {
        printf("%d ", score[i]);
    }

    return 0;
}
