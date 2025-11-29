#include<stdio.h>
int main(){
    float length,width,area,perimeter;//declaration
printf("Enter length of rectangle:\n");//asking user for input
scanf("%f",&length);//taking user input
printf("Enter width of rectangle:\n");
scanf("%f",&width);
if (length<0)//condition
length=(-1)*length;
if (width<0)
width=(-1)*width;
printf("Your length=%f\n",length);
printf("Your width=%f\n",width);
perimeter=2*(length+width);//calculation
area=length*width;
printf("Perimeter of rectangle=%f\n",perimeter);
printf("Area of rectangle=%f\n",area);
return 0;//terminating
}