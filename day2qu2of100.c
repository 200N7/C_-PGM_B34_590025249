//Write a program to calculate the area and circumference of a circle given its radius 

#include<stdio.h>//preprocessor
int main(){//execution starts 
    float radius,area,circumference;//initialization
    printf("Enter radius of the circle:\n");//asking for input
    scanf("%f",&radius);//declaration
    if(radius<0){//condition
    printf("Invalid input\n");//display output
    }else{
    circumference=2*3.14*radius;//calculation
    area=3.14*radius*radius;
    printf("Circumference of the circle of radius %f= %f\n",radius,circumference);//display output
    printf("Area of the circle of radius %f= %f\n",radius,area);
    }return 0;//termination
}