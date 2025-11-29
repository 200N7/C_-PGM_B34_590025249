#include<stdio.h>
int main(){
    float x1,x2,x3,y1,y2,y3,c;//declaration
    printf("Enter value for x1\n");//asking user for input
    scanf("%f",&x1);//taking user input
    printf("Enter value for y1\n");
    scanf("%f",&y1);
    printf("Enter value for x2\n");
    scanf("%f",&x2);   
    printf("Enter value for y2\n");
    scanf("%f",&y2);
printf("Enter value for x3\n");
scanf("%f",&x3);
printf("Enter value for y3\n");
scanf("%f",&y3);
c=(x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2));//calculation
if(c==0)//decision making
printf("Given points are collinear\n");
else
printf("Given points are non collinear\n");
return 0;//terminating
}