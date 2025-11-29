//Write a program to print the products of even number from 1 to n

#include<stdio.h>
int main(){
    int num,i,prod=1;
    printf("Enter an even number: ");
    scanf("%d",&num);
    if(num%2!=0||num<=0){
        printf("Product of even number is to be calculated so please enter an even number that should be greater than 0\n");
    }else{
        for(i=2;i<=num;i=i+2){
            prod=prod*i;
        }printf("Product of %d even number is %d\n",num,prod);
    }return 0;
}