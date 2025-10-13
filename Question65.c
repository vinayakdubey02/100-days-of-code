/*Q66: Insert an element in a sorted array at the appropriate position.


Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include<stdio.h>
int main(){
    int array[100],i,n,element,j;
    printf("Enter number of elements in the sorted array:\n");
    scanf("%d",&n);
    printf("Enter elements in the sorted array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the element to be inserted:\n");
    scanf("%d",&element);
    

    for(i=0;i<n;i++){
        if(array[i]>element){
            break;
        }
    }
    

    for(j=n;j>i;j--){
        array[j]=array[j-1];
    }

    array[i]=element;
    n++; 
    
    printf("Array after insertion:\n");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    
    return 0;
}