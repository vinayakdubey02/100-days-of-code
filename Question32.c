#include <stdio.h>

int main() {
    int num, temp, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;                

    while (temp > 0) {            
        rev = rev * 10 + (temp % 10);
        temp = temp / 10;
    }

    if (num == rev)            
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

    return 0;
}
