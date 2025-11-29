//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit or special character

#include<stdio.h>//preprocessor
int main(){//starts execution
    char character;//variable initializaton
    printf("Enter a character:\n");//asking for user input
    scanf(" %c",&character);//variable declaration
    if(character>='A'&&character<='Z'){//condition
        printf("Mentioned charater is Uppercase alphabet\n");//display output
    }else if(character>='a'&&character<='z'){//condition{
        printf("Mentioned character is Lowercase alphabet\n");
    }else if(character>='0'&&character<='9'){
        printf("Mentioned character is Digit\n");
    }else{
        printf("Mentioned character is Special character\n");
    }return 0;//termination
}