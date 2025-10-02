#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;
    printf("Enter the nth term: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += (2.0 * i) / (4 * i - 1);
    }
    printf("Sum of series is %.4f\n", sum);
    return 0;
}