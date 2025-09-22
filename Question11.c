/*Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
#include <stdio.h>
int main() {
    int num1, num2;

    // ----------- Input 1 -----------
    printf("For Input 1\n");
    printf("Enter an integer: ");
    scanf("%d", &num1);

    if (num1 % 2 == 0) {
        printf("%d is even\n\n", num1);
    } else {
        printf("%d is odd\n\n", num1);
    }

    // ----------- Input 2 -----------
    printf("For Input 2\n");
    printf("Enter an integer: ");
    scanf("%d", &num2);

    if (num2 % 2 == 0) {
        printf("%d is even\n", num2);
    } else {
        printf("%d is odd\n", num2);
    }

    return 0;
}   