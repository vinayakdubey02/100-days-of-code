#include <stdio.h>
int main() {
    int i;
    // First block: 1 star
    printf("*\n\n");

    // Second block: 3 stars
    for(i = 0; i < 3; i++)
        printf("*\n");
    printf("\n");

    // Third block: 5 stars
    for(i = 0; i < 5; i++)
        printf("*\n");
    printf("\n");

    // Fourth block: 3 stars
    for(i = 0; i < 3; i++)
        printf("*\n");
    printf("\n");

    // Fifth block: 1 star
    printf("*\n");

    return 0;
}