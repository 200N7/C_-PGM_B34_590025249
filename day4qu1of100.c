//Write a program to swap two numbers without using a third variable

#include<stdio.h>//preprocessing
int main(){//execution starts
    float num1,num2;//variable initialization
    printf("Enter 1st number:\n");//asking for input
    scanf("%f",&num1);//variable declaration
    printf("Enter 2nd number:\n");
    scanf("%f",&num2);
    printf("After swaping:\n%f\n%f\n",num2,num1);//display output
    return 0;//termination
}