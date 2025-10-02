#include <stdio.h>
int main() {
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
      for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
            printf("\nSum of factors is %d",sum);
        }
      }
    printf("\n");
     if(sum==n){
        printf("%d is a perfect number",n);
     }
     else{
        printf("%d is not a perfect number",n);
     }
    return 0;
}