/*Q7: Write a program to swap two numbers without using a third variable.


Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include <stdio.h>
int main() {
    int a, b;
    printf("For Input 1:\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a=a+10;
    b=b-10;
    printf("After swap: %d %d\n", a, b);
    int x, y;
    printf("For Input 2:\n");   
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    x=x+7;  
    y=y-7;  
    printf("After swap: %d %d", x, y);

    return 0;
}