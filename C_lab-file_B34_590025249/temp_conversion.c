#include<stdio.h>
int main(){
    float temp,F;//declaration
    printf("Enter value of temperature in celsius\n");//asking user for input
    scanf("%f",&temp);//taking user input
F=(temp*1.8)+32;//calculation
printf("Value of temperature in celsius:%f\n",temp);
printf("Value of temperature in farenheit:%f\n",F);
return 0;//terminating
}