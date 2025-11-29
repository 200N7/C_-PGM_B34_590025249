/*Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at Rs.5/unit
Next 100 units at Rs.7/unit
Next 100 units at Rs.10/unit
Above at Rs.12/unit*/

#include<stdio.h>
int main(){
    int unit,bill;
    printf("Enter units consumed\n");
    scanf("%d",&unit);
    if(unit<1)
    printf("Enter correct unit\n");
    else{
        if(unit>0&&unit<101){
            bill=unit*5;
            printf("Electric bill for %d unit is Rs.%d\n",unit,bill);
        }else if(unit>100&&unit<201){
            bill=500+(unit-100)*7;
            printf("Electric bill for %d unit is Rs.%d\n",unit,bill);
        }else if(unit>200&&unit<301){
            bill=1200+(unit-200)*10;
            printf("Electric bill for %d unit is Rs.%d\n",unit,bill);
        }else{
            bill=2200+(unit-300)*12;
            printf("Electric bill for %d unit is Rs.%d\n",unit,bill);
        }
    }return 0;
}