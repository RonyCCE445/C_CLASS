#include <stdio.h>

int main() {
    int product = 1; 
    int item; 

    
    printf("Enter an item: ");
    scanf("%d", &item);

    if (item != 0) {
        product *= item;
    }
    printf("Product: %d\n", product);

    return 0;
}
