#include<stdio.h>
int main(){
    float no1,no2,sum;//declaration
   printf("Enter no1 value:\n");//asking user for input
    scanf("%f",&no1);//taking user input
    printf("Enter no2 value:\n");
    scanf("%f",&no2);
    sum=no1+no2;//calculation
    printf("sum=%f\n",sum);
    return 0;//terminating
}