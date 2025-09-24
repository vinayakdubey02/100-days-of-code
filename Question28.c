#include <stdio.h>
int main() {
    int n ,i,sum=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum=sum+2*i;
    }
    printf("The sum of the first %d even numbers is: %d\n", n, sum);
    return 0;
}
