/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include <stdio.h>
int main() {
    int num1,num2,num3;
    printf("input an integer: ");
    scanf("%d",&num1);
    if(num1>0){
    
        printf("Positive\n");
    }
    else if(num1<0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }

}