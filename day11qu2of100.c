//Write a program to find profit and loss percentage given cost price and selling price

#include<stdio.h>
int main(){
    float cp,sp,value,value_percent;
    printf("Enter cost price:\n");
    scanf("%f",&cp);
    printf("Enter selling price:\n");
    scanf("%f",&sp);
    if(sp<0||cp<0)
    printf("Enter valid amount\n");
    else{
        if(sp>cp){
         value=sp-cp;
         value_percent=(value/cp)*100;
         printf("Profit gained: %f\nProfit percentage: %f%%\n",value,value_percent);
        }else if(cp>sp){
            value=cp-sp;
            value_percent=(value/sp)*100;
            printf("Loss of: %f\nLoss percentage: %f%%\n",value,value_percent);
        }else{
            printf("No profit No loss\n");
        }
    } return 0;
}

