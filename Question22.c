#include <stdio.h>
int main() {
    int CP, SP, Profit,Loss ;
    printf("Enter Cp and Sp:");
    scanf("%d %d,&CP,SP");
    if (SP > CP) {
        printf("Profit:,%d",Profit =SP/CP*100); 
    } else if (CP > SP) {
        printf("Loss:%d",Loss = SP/CP*100);
    } else {
        printf("No profit no loss");
    }
    return 0;
}

