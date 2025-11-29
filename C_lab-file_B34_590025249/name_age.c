#include<stdio.h>
int main(){
   int age;//declaration
    char name[20];
    printf("Enter your name:\n");//asking user for input
    scanf("%s",name);//taking user input
    printf("Enter your age:\n");
    scanf("%d",&age);
    if(age<0)//condition
    printf("Age can't be negative\n");
    else
    printf("Your name is %s\n",name);
    printf("Your age is %u\n",age);
    return 0;//terminating
}