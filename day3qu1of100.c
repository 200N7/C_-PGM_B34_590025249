//Write a program to convert temperature from celsius to fahrenheit.

#include<stdio.h>
int main(){
    float temp,F;//initialization
    printf("Enter value of temperature in celsius\n");//asking user for input
    scanf("%f",&temp);//declaration
F=(temp*1.8)+32;//calculation
printf("Value of temperature in celsius:%f\n",temp);//display output
printf("Value of temperature in farenheit:%f\n",F);
return 0;//termination
}