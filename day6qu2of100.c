//Write a program to input an integer and check whether it is positive, negative or zero using nested if-else

#include<stdio.h>//preprocessor 
int main(){//starts execution
    float num;//variable initialization
    int s_num;
    printf("Enter an integer value:\n");//asking for user input
    scanf("%f",&num);//variable declaration
    s_num=(int)num;//storing integer value of float datatype
    if(num>s_num&&num<s_num+1){//condition
        printf("Invalid input\n");//display output
    }else{
        if(num<0){
            printf("Negative number\n");//display output
        }else if(num>0){
            printf("Positive number\n");
        }else{
            printf("Zero\n");
        }
    }return 0;//termination
}