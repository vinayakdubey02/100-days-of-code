#include <stdio.h>

int main() {
    int num, digit, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;      // get last digit
        if (digit % 2 != 0)    // if digit is odd
            product = product * digit;
        num = num / 10;        // remove last digit
    }

    printf("Product of odd digits is %d\n", product);

    return 0;
}
