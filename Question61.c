#include<stdio.h>
int main(){
    int array[5],i,j,n;
    printf("Enter elements in the array:\n");
    for(i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the number to be searched:\n");
    scanf("%d",&n);
    n=0;
    for(i=0;i<5;i++){
        if(array[i]==n);
         array[i]=n;
         printf("Element found at index %d\n",i);
            
    }
    return 0;
}