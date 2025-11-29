#include<stdio.h>
int main(){
    int y,ly,ny,s,d;//declaration
    printf("Enter year:\n");//asking user for input
    scanf("%d",&y);//taking user input
    if(y<0)//condition
    y=(-1)*y;
    ly=((y-1)/4)-((y-1)/100)+((y-1)/400);//calculation
    ny=(y-1)-ly;
    s=(ny+2*ly)%7;
    d=s;
    printf("On 01/01/%d it was ",y);
    if(d==0)//decision making
    printf("Monday\n");
    else if(d==1)
    printf("Tuesday\n");
    else if(d==2)
    printf("Wednesday");
    else if(d==3)
    printf("Thursday\n");
    else if(d==4)
    printf("Firday\n");
    else if(d==5)
    printf("Saturday\n");
    else
    printf("Sunday\n");
    return 0;//terminating
}