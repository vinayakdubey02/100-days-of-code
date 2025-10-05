#include<stdio.h>
int main(){
    int array[5]={1,2,3,4,5},n;
    printf("Enter the number of elements in array u want:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}