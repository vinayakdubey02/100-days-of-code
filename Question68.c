/*Q69: Find the second largest element in an array.


Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include<stdio.h>
int main(){
    int array[100],i,n,largest,secondLargest;
    printf("Enter number of elements in the array:\n");
    scanf("%d",&n);
    printf("Enter elements in the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    
    if(n<2){
        printf("Array should have at least two elements\n");
        return 0;
    }
    
    largest=secondLargest=-2147483648; 
    
    for(i=0;i<n;i++){
        if(array[i]>largest){
            secondLargest=largest;
            largest=array[i];
        } else if(array[i]>secondLargest && array[i]!=largest){
            secondLargest=array[i];
        }
    }
    
    if(secondLargest==-2147483648){
        printf("No second largest element\n");
    } else {
        printf("The second largest element is: %d\n",secondLargest);

    }
    return 0;
}

