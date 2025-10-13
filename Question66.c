/*Q67: Insert an element in an array at a given position.


Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include<stdio.h>
int main(){
    int array[100],i,n,element,position,j;
    printf("Enter number of elements in the array:\n");
    scanf("%d",&n);
    printf("Enter elements in the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the position and element to be inserted:\n");
    scanf("%d %d",&position,&element);
    
    if(position<0 || position>n){
        printf("Invalid position\n");
        return 0;
    }

    for(j=n;j>position;j--){
        array[j]=array[j-1];
    }

    array[position]=element;
    n++; 
    
    printf("Array after insertion:\n");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    
    return 0;
}