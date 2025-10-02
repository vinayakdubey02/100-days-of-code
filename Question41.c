#include <stdio.h>
int main() {
    int n, firstdigit, lastdigit, digits = 0, temp, swapped, pow10;

    printf("Enter a number: ");
    scanf("%d", &n);


    lastdigit = n % 10;

    
    temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    
    temp = n;
    while (temp >= 10) {
        temp /= 10;
    }
    firstdigit = temp;

    
    pow10 = 1;
    for (int i = 1; i < digits; i++)
        pow10 *= 10;
    int middle = n % pow10; 
    middle = middle / 10;   

    
    swapped = lastdigit * pow10 + middle * 10 + firstdigit;

    printf("Number after swapping first and last digit: %d\n", swapped);
    return 0;
}