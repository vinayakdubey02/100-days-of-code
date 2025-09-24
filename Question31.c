/*Q31: Write a program to take a number as input and print its equivalent binary representation using loop.*/
    #include <stdio.h>

int main() {
    int num, temp, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Convert decimal to binary
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (temp > 0) {
        binary[i] = temp % 2;  // remainder (0 or 1)
        temp = temp / 2;        // quotient
        i++;
    }

    // Print binary in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
