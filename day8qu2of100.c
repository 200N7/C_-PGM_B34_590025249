//Write a program to input three numbers and find the largest among them using if-else

#include<stdio.h>
int main(){
    float num1,num2,num3;
    printf("Enter 1st number\n");
    scanf("%f",&num1);
    printf("Enter 2nd number\n");
    scanf("%f",&num2);
    printf("Enter 3rd number\n");
    scanf("%f",&num3);
    if(num1>num2&&num1>num3){
        printf("%f is greatest among the three number\n",num1);
    }else if(num2>num1&&num2>num3){
        printf("%f is greatest among the three number\n",num2);
    }else{
        printf("%f is greatest among the three number\n",num3);
    }return 0;
}