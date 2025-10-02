#include <stdio.h>
#include<math.h>
int main() {
    
    int n,m,factorial,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0){
        m=n%10;
        factorial=1;
        for(int i=1;i<=m;i++){
            factorial=factorial*i;
        }
        sum=sum+factorial;
        n=n/10;
    }
    printf("Sum of factorial of digits is %d\n",sum);
    if(sum==n){
        printf("%d is a strong number",n);
    }
    else{
        printf("%d is not a strong number",n);
    }
    return 0;
}