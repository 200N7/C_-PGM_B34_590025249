#include<stdio.h>
int main(){
    float weight,height,BMI;//declaration 
    printf("Enter your height in Mts:\n");//asking for input
    scanf("%f",&height);//taking user input
    printf("Enter your weight in kgs:\n");
    scanf("%f",&weight);
    if (height<0)
    height=(-1)*height;
    if (weight<0)//condition
    weight=(-1)*weight;
    printf("Your height is:%f\n",height);
    printf("Your weight is:%f\n",weight);
    BMI=weight/(height*height);//calculation
    printf("According to your height and weight, your BMI:%f\n",BMI);
    if(BMI<=15.0)//decision making
    printf("Starvation\n");
    else if(BMI>=15.1&&BMI<=17.5)
    printf("Anorexic");
    else if(BMI>=17.6&&BMI<=18.5)
    printf("Underweight");
    else if(BMI>=18.6&&BMI<=24.9)
    printf("Ideal");
    else if(BMI>=25&&BMI<=25.9)
    printf("Overweight");
    else if(BMI>=30&&BMI<=39.9)
    printf("Obese");
    else if(BMI>=40.0)
    printf("Morbidity Obese");
    return 0;//termination
}