/*Write a program to calculate library fine based on late days as follows:
First 5 days late: Rs.2/day
Next 5 days late: Rs.4/day
Next 20 days late: Rs.6/day
More than 30 days late: Menbership cancelled.*/

#include<stdio.h>
int main(){
    int day,fine;
    printf("Enter number of late days:\n");
    scanf("%d",&day);
    if(day<1)
    printf("Please enter valid number of late days\n");
    else{
        if(day>0&&day<6){
        fine=day*2;
        printf("You have to pay Rs.%d for %d days\n",fine,day);
        }else if(day>5&&day<11){
            fine=10+(day-5)*4;
            printf("You have to pay Rs.%d for %d days\n",fine,day);
        }else if(day>10&&day<31){
            fine=30+(day-10)*6;
            printf("You have to pay Rs.%d for %d days\n",fine,day);
        }else{
            printf("Your membership is cancelled\n");
        }
    }return 0;
}