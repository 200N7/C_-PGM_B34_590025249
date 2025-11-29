//Write a program to input a character and check whether it is a vowel or consonant using if-else

#include<stdio.h>//preprocessor
int main(){//starts execution
    char alpha;//variable initializaton
    printf("Enter a character:\n");//asking for user input
    scanf(" %c",&alpha);//variable declaration
    if((alpha>='A'&&alpha<='Z')||(alpha>='a'&&alpha<='z')){//condition
        if(alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U'||alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'){
        printf("Mentioned charater is vowel\n");//display output
    }else{
        printf("Mentioned character is consonant\n");
    }
    }else{
        printf("Invalid input\n");
    }return 0;//termination
}
