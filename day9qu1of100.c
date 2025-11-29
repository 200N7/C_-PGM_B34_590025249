//Write a program to find the roots of a quadratic equation and categorize them

#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,root1,root2;
    printf("Enter coefficient of x^2:\n");
    scanf("%f",&a);
    printf("Enter coefficient of x:\n");
    scanf("%f",&b);
    printf("Enter constant value:\n");
    scanf("%f",&c);
    d=(b*b)-(4*a*c);
    if(d==0)
        printf("Roots are real and equal\n");
    else if(d>0)
        printf("Roots are real and distinct\n");
    else
        printf("Roots are imaginary and complex conjugate\n");
    root1=(((-1)*b)+sqrt(d))/(2*a);
    root2=(((-1)*b)-sqrt(d))/(2*a);
    printf("Roots of equation formed by given value is: %f and %f\n",root1,root2);
    return 0;
}