//Write a program to input two numbers and display their sum

#include<stdio.h>//preprocessing
int main(){//execution starts
    float num1,num2,sum;//variable initialization
    printf("Enter value of num1:\n");//asking user for input
    scanf("%f",&num1);//variable declaration
    printf("Enter value of num2:\n");
    scanf("%f",&num2);
    sum=num1+num2;//calculation
    printf("Sum= %f\n",sum);//display output
    return 0;//termination
}