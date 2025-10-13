/*Q68: Delete an element from an array.


Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include<stdio.h>
int main(){
    int array[100],i,n,element,j,foundIndex=-1;
    printf("Enter number of elements in the array:\n");
    scanf("%d",&n);
    printf("Enter elements in the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the element to be deleted:\n");
    scanf("%d",&element);
    
    for(i=0;i<n;i++){
        if(array[i]==element){
            foundIndex=i;
            break;
        }
    }
    
    if(foundIndex==-1){
        printf("Element not found\n");
        return 0;
    }

    for(j=foundIndex;j<n-1;j++){
        array[j]=array[j+1];
    }
    
    n--; 
    
    printf("Array after deletion:\n");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");

    
    return 0;
}