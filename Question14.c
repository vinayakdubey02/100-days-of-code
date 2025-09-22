/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
int main() {    
    char ch1, ch2;

    // ----------- Input 1 -----------
    printf("For Input 1\n");
    printf("Enter a character: ");
    scanf(" %c", &ch1);

    if (ch1 == 'a' || ch1 == 'e' || ch1 == 'i' || ch1 == 'o' || ch1 == 'u' ||
        ch1 == 'A' || ch1 == 'E' || ch1 == 'I' || ch1 == 'O' || ch1 == 'U') {
        printf("Vowel\n\n");
    } else {
        printf("Consonant\n\n");
    }

    // ----------- Input 2 -----------
    printf("For Input 2\n");
    printf("Enter a character: ");
    scanf(" %c", &ch2);

    if (ch2 == 'a' || ch2 == 'e' || ch2 == 'i' || ch2 == 'o' || ch2 == 'u' ||
        ch2 == 'A' || ch2 == 'E' || ch2 == 'I' || ch2 == 'O' || ch2 == 'U') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

    return 0;
}                               