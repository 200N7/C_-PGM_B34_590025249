//Write a program to apply left shift and right shift operator

#include<stdio.h>
int main(){
    int a=2 ,b=5;
    printf("%d %d\n",a,b);
    printf("%d\n",a>>b);
    printf("%d\n",a<<b);
    printf("%d\n",b<<a);
    printf("%d\n",b>>a);
    printf("%d\n",a<b);
    printf("%d\n",a>b);
    return 0;
}