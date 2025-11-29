//Write a program to find and display the sum of the first n natural numbers 

#include<stdio.h>//preprocessing
int main(){//execution starts
    int n,sum;//variable initialization
    printf("Enter a natural number:\n");//asking for input
    scanf("%d",&n);//variable declaration
    if(n<0){//condition
    printf("Invalid input\n");//display output
    }else{
    sum=((n*(n+1))/2);//calculation
    printf("Sum of first %d natural numbers is %d\n",n,sum);//display output
    }return 0;//termination
}