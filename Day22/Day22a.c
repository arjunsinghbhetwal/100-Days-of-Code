#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Array with 5 elements
    int size = 5;                       // Current size of array
    int removeIndex = 2;                // Index of element to remove (third element)

    // Move elements left starting from the removeIndex
    for (int i = removeIndex; i < size - 1; i++) {
        arr[i] = arr[i + 1];  // Copy next element to current position
    }

    size--;  // One element removed, so size is reduced by 1

    // Print the updated array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
