#include <stdio.h>

int main() {
    int n, first, last, num_digits = 0, temp, swapped, pow = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Store original number for later
    temp = n;

    // Find last digit
    last = n % 10;

    // Find first digit and count digits
    while (n >= 10) {
        n = n / 10;
        pow = pow * 10;
        num_digits++;
    }
    first = n;

    // Remove first digit from the left and last digit from the right
    temp = temp % pow;           // Remove first digit
    temp = temp / 10;            // Remove last digit

    // Build swapped number
    swapped = last * pow + temp * 10 + first;

    printf("Number after swapping: %d\n", swapped);
    return 0;
}
