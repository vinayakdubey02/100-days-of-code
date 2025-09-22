#include<stdio.h>
#include<math.h>
int main () {
    int a,b,c,D,r1,r2;
    printf("Enter three roots of a quadratic equation: ");
    scanf("%d %d %d",&a,&b,&c);
D=b*b-4*a*c;
if(D>0)
{
    r1=(-b+sqrt(D))/(2*a);
    r2=(-b-sqrt(D))/(2*a);
    printf("Roots are real and different.\n");
    printf("Root 1= %d\n",r1);
    printf("Root 2= %d\n",r2);
}
else if(D==0)
{
    r1=(-b+sqrt(D))/(2*a);
    r2=(-b-sqrt(D))/(2*a);
    printf("Roots are real and same.\n");
    printf("Root 1= %d\n",r1);
    printf("Root 2= %d\n",r2);
}
else
{
    r1=(-b+sqrt(D))/(2*a);
    r2=(-b-sqrt(D))/(2*a);
    printf("Roots are complex and different.\n");
    printf("Root 1= %d+%di\n",r1);
    printf("Root 2= %d-%di\n",r2);
}
return 0;
}