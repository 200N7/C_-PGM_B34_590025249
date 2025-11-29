//Write a program to input a year and check whether its is a leap year or not using condition statement

#include<stdio.h>
int main(){
    float year;
    int s_year;
    printf("Enter a year\n");
    scanf("%f",&year);
    s_year=(int)year;
    if(year>s_year&&year<s_year+1||s_year<1000){
        printf("Invalid input\n");
    }else{
        if((int)year%4==0){
        printf("Mentioned year is a leap year\n");
        }else{
            printf("Mentioned year is not a leap year\n");
        }
    }return 0;
}