#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three sides of a triqangle:");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c){
        printf("Equilateral triangle");
    }
    else if(a==b||b==c||c==a){
        printf("Isosceles triangle");
        }
        else{
            printf("Scalene triangle");
    }
    return 0;
    }
