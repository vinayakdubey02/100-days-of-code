/*Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
int main() {
    int num1,num2,num3;
    printf("For Input 1\n");
    printf("Enter three integers: ");   
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest number\n\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the largest number\n\n", num2);
    } else {
        printf("%d is the largest number\n\n", num3);
    }
    printf("For Input 2\n");
    printf("Enter three integers: ");   
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest number\n\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the largest number\n\n", num2);
    } else {
        printf("%d is the largest number\n\n", num3);
    }
    return 0;
}
    
   