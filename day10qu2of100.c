//Write a program to display the day of the week based on a number (1-7) using switch-case 

#include<stdio.h>
int main(){
    int day;
    printf("Enter the day of the week based on number (1-7):\n");
    scanf("%d",&day);
    if(day<1||day>7)
    printf("Enter valid input between number (1-7)\n");
    else
    switch(day){
        case 1:printf("Monday\n");
        break;
        case 2:printf("Tuesday\n");
        break;
        case 3:printf("Wednesday\n");
        break;
        case 4:printf("Thursday\n");
        break;
        case 5:printf("Friday\n");
        break;
        case 6:printf("Saturday\n");
        break;
        default:printf("Sunday\n");
    }
}