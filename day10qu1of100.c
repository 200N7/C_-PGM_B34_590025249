//Write a program to classify a triangle as equilateral, isoceles or scalene based on its side lengths

#include<stdio.h>
int main(){
    float a,b,c,angle1,angle2,angle3;//declaration
    printf("Enter value of 1st side of triangle (say a):\n");//asking user for input
    scanf("%f",&a);//taking user input
    printf("Enter value of 2nd side of triangle (say b):\n");
    scanf("%f",&b);
    printf("Enter value of 3rd side of triangle (say c):\n");
    scanf("%f",&c);
    /*printf("Enter value of 1st angle of triangle (say angle1):\n");
    scanf("%f",&angle1);
    printf("Enter value of 2nd angle of triangle (say angle2):\n");
    scanf("%f",&angle2);
    printf("Enter value of 3rd angle of triangle (say angle3):\n");
    scanf("%f",&angle3);
if (a<0)//condition
a=(-1)*a;
if (b<0)
b=(-1)*b;
if(c<0)
c=(-1)*c;
if(angle1<0)
angle1=(-1)*angle1;
if(angle2<0)
angle2=(-1)*angle2;
if (angle3<0)
angle3=(-1)*angle3;
printf("Value of a=%f\n",a);
printf("Value of b=%f\n",b);
printf("Value of c=%f\n",c);
printf("Value of angle1=%f\n",angle1);
printf("Value of angle2=%f\n",angle2);
printf("Value of angle3=%f\n",angle3);
if (angle1+angle2+angle3==180){//decision making
    if (angle1==90||angle2==90||angle3==90){
        if(a!=b&&b!=c&&a!=c)
        printf("Triangle is valid\nGiven triangle is right angle scalene\n");
        if (a==b&&a!=c||a==c&&a!=b&&angle1==angle2||angle1==angle3||angle2==angle3)
        printf("Triangle is valid\nGiven triangle is right angle isosceles\n");
    }else if (angle1==angle2&&angle2==angle3&&a==b&&b==c){
        printf("Triangle is valid\nGiven triangle is equilateral\n");
    }else if (angle1==angle2&&angle1!=angle3||angle1==angle3&&angle1!=angle2&&a==b&&a!=b||a==c&&a!=c){
        printf("Triangle is valid\nGiven triangle is isosceles\n");
    }else if (angle1!=angle2&&angle1!=angle3&&angle2!=angle3&&a!=b&&a!=c&&b!=c){
        printf("Triangle is valid\nGiven triangle is scalene\n");
    }
    }else{
        printf("Triangleis invalid\n");
    }*/
   if(a>0&&b>0&&c>0){
   if(a==b&&a!=c||a==c&&a!=b||b==c&&b!=a||b==a&&b!=c||c==a&&c!=b||c==b&&c!=a)
   printf("Triangle formed by above mention side is a isoceles triangle\n");
   else if(a!=b&&a!=c&&b!=c)
   printf("Triangle formed by above mention side is a scalene triangle\n");
   else if(a==b&&a==c&&b==c)
   printf("Triangle formed by above mention side is a equilateral triangle\n");
   }else{
    printf("Invalid output\n");
   }
   return 0;//terminating
}