#include<stdio.h>
int main(){
int Day;
printf("Enter day no.");
scanf("%d",&Day);
switch(Day){
case 1:printf("Monday");
break;
case 2:printf("Tuesday");
break;
case 3:printf("Wednesday");
break;
case 4:printf("Thursday");
break;
case 5:printf("Friday");
break;
case 6:printf("Saturday");
break;
case 7:printf("Sunday");
break;
default:printf("Invalid day no.");
}
return 0;
}

