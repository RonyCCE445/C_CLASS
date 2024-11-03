#include <stdio.h>

int main() {
    int x; // Variable for input
    int zero_count = 0;
    int minus_sum = 0;
    int plus_sum = 0;

    // Example input for x
    printf("Enter a number (enter -1 to stop): ");
    while (1) {
        scanf("%d", &x);
        if (x == -1) break; // Exit condition for input

        if (x == 0) {
            zero_count += 1;
        } else if (x < 0) {
            minus_sum += x;
        } else {
            plus_sum += x;
        }
    }

    printf("Zero count: %d\n", zero_count);
    printf("Sum of negatives: %d\n", minus_sum);
    printf("Sum of positives: %d\n", plus_sum);

    return 0;
}
