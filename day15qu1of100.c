//Write a program to calculate the factorial of a number

#include<stdio.h>
int main(){
    int num,i,fact=1;
    printf("Enter a whole number: ");
    scanf("%d",&num);
    if(num<0){
        printf("Enter a whole number\n");
    }else{
        for(i=1;i<=num;i++){
            fact=fact*i;
        }printf("Factorial of %d is %d\n",num,fact);
    }return 0;
}