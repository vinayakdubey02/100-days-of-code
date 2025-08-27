/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int main() {
    int total_seconds1, total_seconds2;
    int hours, minutes, seconds;

    // ----------- Input 1 -----------
    printf("For Input 1\n");
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds1);

    hours = total_seconds1 / 3600;
    minutes = (total_seconds1 % 3600) / 60;
    seconds = total_seconds1 % 60;

    printf("%d:%d:%d\n\n", hours, minutes, seconds);

    // ----------- Input 2 -----------
    printf("For Input 2\n");
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds2);

    hours = total_seconds2 / 3600;
    minutes = (total_seconds2 % 3600) / 60;
    seconds = total_seconds2 % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;


}