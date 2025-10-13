/*71: Read and print a matrix.


Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include<stdio.h>
int main(){
    int matrix[10][10],i,j,rows,cols;
    printf("Enter number of rows and columns in the matrix:\n");
    scanf("%d %d",&rows,&cols);
    printf("Enter elements in the matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    
    printf("The matrix is:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}