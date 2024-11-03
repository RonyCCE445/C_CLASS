#include <stdio.h>

int main() {
    int x, y; 

    
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    if (x > y) {
        y = x - y;
    } else {
        y = y - x;
    }

    printf("Absolute difference stored in y: %d\n", y);

    return 0;
}
