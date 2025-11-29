//Write a program to input time in seconds and convert it to hours:minutes:seconds format

#include<stdio.h>//preprocessor
int main(){//execution starts
    int sec,hr,min;//initialization
    printf("Enter time in seconds:\n");//asking for input
    scanf("%d",&sec);//declaration
    if(sec<0){//condition
        printf("Invalid input\n");//display output
    }else{
    hr=sec/3600;//calculation
    min=(sec%3600)/60;
    sec=(sec%3600)%60;
    printf("hours:minutes:seconds= %d:%d:%d\n",hr,min,sec);//display output
    }return 0;//termination
}