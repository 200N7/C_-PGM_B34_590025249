//Write a program to input an integer and check whether it is even or odd using if-else

#include<stdio.h>//preprocessor
int main(){//starts execution
    float num;//variable initialization
    int s_num;
    printf("Ener an integer:\n");//asking user for input
    scanf("%f",&num);//variable declaration
    s_num=(int)num;//storing integer value of float data type
    if(num>s_num&&num<s_num+1){//condition
        printf("Invalid input please enter an integer\n");//display output
    }else{
    if((int)num%2==0){
        printf("%f is an even number\n",num);//display output
    }else{
        printf("%f is an odd number\n",num);//display output
    }
}return 0;//termination
}