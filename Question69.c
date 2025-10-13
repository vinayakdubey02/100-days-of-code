/*Q70: Rotate an array to the right by k positions.


Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include<stdio.h>
int main(){
    int array[100],i,n,k,j,temp;
    printf("Enter number of elements in the array:\n");
    scanf("%d",&n);
    printf("Enter elements in the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter number of positions to rotate:\n");
    scanf("%d",&k);
    
    k=k%n; 
    
    for(j=0;j<k;j++){
        temp=array[n-1];
        for(i=n-1;i>0;i--){
            array[i]=array[i-1];
        }
        array[0]=temp;
    }
    
    printf("Array after rotation:\n");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    
    return 0;
}