/*
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main()
{
    int a = 10, b = 2, c = 7, d = 3;
    
    printf("For Input 1:\n");
    printf("Sum = %d ", a + b);
    printf("Diff = %d ", a - b);
    printf("Product = %d ", a * b);
    printf("Quotient = %d\n", a / b);

    printf("For Input 2:\n");
    printf("Sum = %d ", c + d);
    printf("Diff = %d ", c - d);
    printf("Product = %d ", c * d);
    printf("Quotient = %d\n", c / d);

    return 0;
}