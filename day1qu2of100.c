//Write a program to input two numbers and dispaly their sum,difference,product and quotient

#include<stdio.h>//preprocessing
int main(){//execution starts
    float num1,num2,sum,mult,diff1,diff2,div;//variable initialization
    printf("Enter value of num1:\n");//asking for input
    scanf("%f",&num1);//variable declarartion
    printf("Enter value of num2:\n");
    scanf("%f",&num2);
    sum=num1+num2;//calculation
    printf("%f added to %f= %f\n",num1,num2,sum);//display output
   /*if(num1>num2){
    diff=num1-num2;
    }else{
    diff=num2-num1;
    }printf("Difference= %f\n",diff);*/
    diff1=num1-num2;
    printf("%f subratcted from %f= %f\n",num1,num2,diff1);
    diff2=num2-num1;
    printf("%f subtracted from %f= %f\n",num2,num1,diff2);
    mult=num1*num2;
    printf("%f multiplied with %f= %f\n",num1,num2,mult);
    if(num1>num2&&num2!=0||num1==0){//condition
   div=num1/num2;
   printf("Quotient= %f\n",div);
    }else if(num2>num1||num2==0){
    div=num2/num1;
    printf("Quotient= %f\n",div);}
   /* div1=num1/num2;
    printf("%f divided by %f= %f\n",num1,num2,div1);
    div2=num2/num1;
    printf("%f divided by %f= %f\n",num2,num1,div2);*/
    return 0;//termination
}