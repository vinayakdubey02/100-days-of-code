/*Q8: Write a program to find and display the sum of the first n natural numbers.


Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55
*/

#include<stdio.h>
int main()
{
    int n1 = 5;
    int n2 = 10;

    printf("For Input 1:\n");
    printf("Sum = %d\n", n1 * (n1 + 1) / 2);

    printf("For Input 2:\n");
    printf("Sum = %d\n", n2 * (n2 + 1) / 2);

    return 0;
}
