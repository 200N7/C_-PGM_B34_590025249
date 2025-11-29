//Write a program to print numbers from 1 to n

#include<stdio.h>
int main(){
    int num,i;
    printf("Enter a whole number\n");
    scanf("%d",&num);
    if(num<0){
    printf("Enter a whole number");
    }else{
        for(i=0;i<=num;i++)
        printf("%d\n",i);
    }printf("\n");
    return 0;
}

