//Write a program to calculate the area and the perimeter of a rectangle given its length and breadth

#include<stdio.h>
int main(){
    float length,width,area,perimeter;//initialization
printf("Enter length of rectangle:\n");//asking user for input
scanf("%f",&length);//taking user input
printf("Enter width of rectangle:\n");//declaration
scanf("%f",&width);
/*if (length<0)//condition
length=(-1)*length;
if (width<0)
width=(-1)*width;
printf("Your length=%f\n",length);
printf("Your width=%f\n",width);*/
if(length<0||width<0)
printf("Invalid input\n");
else
perimeter=2*(length+width);//calculation
area=length*width;
printf("Perimeter of rectangle=%f\n",perimeter);//display output
printf("Area of rectangle=%f\n",area);
return 0;//terminating
}