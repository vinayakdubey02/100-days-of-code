/*Q65: Search in a sorted array using binary search.


Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include<stdio.h>
int main(){
    int array[100],i,n,search,low,high,mid,foundIndex=-1;
    printf("Enter number of elements in the array:\n");
    scanf("%d",&n);
    printf("Enter elements in the sorted array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the number to be searched:\n");
    scanf("%d",&search);
    
    low=0;
    high=n-1;
    
    while(low<=high){
        mid=(low+high)/2;
        if(array[mid]==search){
            foundIndex=mid;
            break;
        }
        else if(array[mid]<search){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    
    if(foundIndex!=-1){
        printf("Found at index %d\n",foundIndex);
    } else {
        printf("-1\n");
    }
    
    return 0;
}