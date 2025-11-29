//Write a program to calculate simple and compound interest for given principal,rate and time

#include<stdio.h>//preprocessor
#include<math.h>//to include pow
int main(){//execution starts
    float principal,rate,time,si,ci;//variable initialization
    printf("Enter principal amount:\n");//asking for input
    scanf("%f",&principal);//variable declaration
    printf("Enter rate value:\n");
    scanf("%f",&rate);
    printf("Enter time:\n");
    scanf("%f",&time);
    if(principal<0||rate<0||time<0){//condition
    printf("Invalid input\n");//display output
    }else{
    si=(principal*rate*time)/100;//calculation
    ci=(principal*(pow((1+(rate/100)),time)))-principal;//pow is a function use to calculate number raise to any number
    printf("Simple interest= %f\n",si);//display output
    printf("Compound interest= %f\n",ci);
}return 0;//termination
}