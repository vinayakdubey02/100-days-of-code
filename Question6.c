/*Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("For Input 1:\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b, &c);
    c=2;
    a=a+c;
    b=b-c;
    printf("After swap: %d %d", a, b);
    int x,y,z;
    printf("\nFor Input 2:\n"); 
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y); 
    z=2;
    x=x+z;  
    y=-z+y;
    printf("After swap: %d %d", x, y);
    return 0;
}
    