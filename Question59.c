#include<stdio.h>
int main(){
    int array[6];
    int even=0, odd=0;
    printf("Enter 6 integers:\n");
    for(int i=0; i<6; i++){
        scanf("%d", &array[i]);
        if(array[i] % 2 == 0){
            even++;
        } else {
            odd++;
        }

    }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    return 0;
}