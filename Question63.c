/*Q64: Find the digit that occurs the most times in an integer number.


Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include<stdio.h>
int main(){
    int number, digit, count[10] = {0}, i, maxCount = 0, mostFrequentDigit;
    printf("Enter an integer number:\n");
    scanf("%d", &number);
    

    while (number > 0) {
        digit = number % 10;
        count[digit]++;
        number /= 10;
    }
    
    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }
    
    printf("The digit that occurs the most times is: %d\n", mostFrequentDigit);
    return 0;
}