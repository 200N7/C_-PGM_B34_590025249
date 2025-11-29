//Write a program to reverse a given number

#include<stdio.h>
int main(){
    int num,i,rem,sum=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        if(rem>='A'&&rem<='Z'||rem>='a'&&rem<='z'){
            printf("Enter only numbers\n");
        }else{
        sum=10*sum+rem;
        num/=10;
        }
    }printf("Reverse number is %d\n",sum);
    return 0;
    }