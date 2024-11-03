#include <stdio.h>

int replaceZeroAndOne(int num) {
    int result = 0;
    int place = 1; 

    while (num > 0) {
        int digit = num % 10; 

        
        if (digit == 0) {
            result += 1 * place; 
        } else if (digit == 1) {
            result += 0 * place; 
        } else {
            result += digit * place; 
        }

        num /= 10; 
        place *= 10; 
    }

    return result;
}

int main() {
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    int modifiedNumber = replaceZeroAndOne(number);
    printf("Modified number: %d\n", modifiedNumber);

    return 0;
}