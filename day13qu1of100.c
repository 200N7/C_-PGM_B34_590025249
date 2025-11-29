//Write a program to implement a basic calculator using switch-case for +,-,*,/,%

#include<stdio.h>
#include<math.h>
int main(){
    float num1,num2,operation;
    char operator,decision;
    printf("Input 1st number:\n");
    scanf("%f",&num1);
    printf("Input 2nd number:\n");
    scanf("%f",&num2);
    printf("Input operator to perform operation:\n");
    scanf(" %c",&operator);
    switch(operator){
        case '+':
        operation=num1+num2;
        printf("Sum= %f\n",operation);
        break;
        case '-':
        printf("%f '-' %f press o to continue\nor\n%f '-' %f press k to continue\n",num1,num2,num2,num1);
        scanf(" %c",&decision);
        if(decision=='o'){
            operation=num1-num2;
            printf("Difference= %f\n",operation);
        }else if(decision=='k'){
            operation=num2-num1;
            printf("Difference= %f\n",operation);
        }else{
        printf("See and press correctly\n");
        }break;
        case '*':
        operation=num1*num2;
        printf("Product= %f\n",operation);
        break;
        case '/':
        printf("%f '/' %f press o to continue\nor\n%f '/' %f press k to continue\n",num1,num2,num2,num1);
        scanf(" %c",&decision);
        if(decision=='o'){
            if(num2==0){
                printf("Not possible\n");
            }else{
            operation=num1/num2;
            printf("Quotient= %f\n",operation);
        }
    }else if(decision=='k'){
        if(num1==0){
            printf("Not possible\n");
        }else{
            operation=num2/num1;
            printf("Quotient= %f\n",operation);
        }
    }else{
        printf("See and press correctly\n");
        }break;
        case '%':
        printf("%f '%%' %f press o to continue\nor\n%f '%%' %f press k to continue\n",num1,num2,num2,num1);
        scanf(" %c",&decision);
        if(decision=='o'){
            if(num2==0){
                printf("Not possible\n");
            }else{
            operation=fmod(num1,num2);
            printf("Remainder= %f\n",operation);
        }
    }else if(decision=='k'){
        if(num1==0){
            printf("Not possible\n");
        }else{
            operation=fmod(num2,num1);
            printf("Remainder= %f\n",operation);
        }
    }else{
        printf("See and press correctly\n");
        }break;
        default:
        printf("Enter correct operator\n");
    }return 0;
}