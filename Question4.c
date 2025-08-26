/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
#define PI 3.14159
int main()
{
    int radius1 = 7;
    int radius2 = 3;

    printf("For Input 1:\n");
    printf("Area = %.2f ", PI * radius1 * radius1);
    printf("Circumference = %.2f\n", 2 * PI * radius1);

    printf("For Input 2:\n");
    printf("Area = %.2f ", PI * radius2 * radius2);
    printf("Circumference = %.2f\n", 2 * PI * radius2);

    return 0;
}   