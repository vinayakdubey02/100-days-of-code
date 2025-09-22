#include<stdio.h>
int main(){
    int Month;
    printf("Enter month no.");
    scanf("%d",&Month);
    switch(Month){
        case 1: printf("31 days,January");
                break;
        case 2: printf("28 or 29 days,Febuary");
                break;
        case 3: printf("31 days,March");
                break;
        case 4: printf("30 days,April");
                break;
        case 5: printf("31 days,May");
                break;
        case 6: printf("30 days,June");
                break;
        case 7: printf("31 days,July");
                break;
        case 8: printf("31 days,August");
                break;
        case 9: printf("30 days,September");
                break;
        case 10: printf("31 days,October");
                 break;
        case 11: printf("30 days,November");
                 break;
        case 12: printf("31 days,December");
                 break;
    }
    return 0;
}