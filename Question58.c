#include<stdio.h>
int main(){
    int array[5], n, min, max;
    printf("Enter the number of elements (up to 5): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    min = max = array[0];
    for(int i = 1; i < n; i++){
        if(array[i] > max)
            max = array[i];
        if(array[i] < min)
            min = array[i];
    }

    printf("Maximum is %d\n", max);
    printf("Minimum is %d\n", min);
    return 0;
}