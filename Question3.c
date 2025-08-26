/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main()
{
    int length1 = 5, breadth1 = 10;
    int length2 = 3, breadth2 = 7;

    printf("For Input 1:\n");
    printf("Area = %d ", length1 * breadth1);
    printf("Perimeter = %d\n", 2 * (length1 + breadth1));

    printf("For Input 2:\n");
    printf("Area = %d ", length2 * breadth2);
    printf("Perimeter = %d\n", 2 * (length2 + breadth2));

    return 0;
}