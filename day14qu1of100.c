//Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter an odd number: ");
    scanf("%d",&n);
    if(n%2==0||n<=0){
        printf("Sum of first n odd number is to be calculated so please enter an odd numberthat should be greater than 0\n");
    }else{
        for(i=1;i<=n+(n-1);i=i+2){
            sum=sum+i;
        }printf("Sum of first %d odd numbers is %d\n",n,sum);
    }return 0;
}