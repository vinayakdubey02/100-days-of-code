
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    
    int array[n];
    int positive = 0, negative = 0, zero = 0;
    
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        if(array[i] > 0) {
            positive++;
        } else if(array[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }
    
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
    return 0;
}