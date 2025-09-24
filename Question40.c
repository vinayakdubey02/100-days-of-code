#include <stdio.h>

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);   // read as string

    printf("1's complement: ");
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            printf("1");
        else if (binary[i] == '1')
            printf("0");
        else {
            printf("\nInvalid input! Only 0 and 1 allowed.\n");
            return 1;
        }
    }
    printf("\n");

    return 0;
}
