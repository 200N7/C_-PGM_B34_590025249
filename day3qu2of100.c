//Write a program to swap two numbers using a third variable

#include<stdio.h>//preprocessing
int main(){//execution starts
    float num1,num2,var;//variable initialization
    printf("Enter 1st number:\n");//asking for input
    scanf("%f",&num1);//variable declaration
    printf("Enter 2nd number:\n");
    scanf("%f",&num2);
    var=num1;//calculation
    printf("After swaping:\n%f\n%f\n",num2,var);//display output
    return 0;//termination
}