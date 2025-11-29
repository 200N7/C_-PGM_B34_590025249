#include<stdio.h>
int main(){
    int l1,l2,l3,b1,b2,b3,p1,p2,p3,max,rect;//declaration
    printf("Enter length of rectangle 1:\n");//asking user for input
    scanf("%d",&l1);//taking user input
    printf("Enter breadth of rectangle 1:\n");
    scanf("%d",&b1); printf("Enter length of rectangle 2:\n");
    scanf("%d",&l2);
    printf("Enter breadth of rectangle 2:\n");
    scanf("%d",&b2); printf("Enter length of rectangle 3:\n");
    scanf("%d",&l3);
    printf("Enter breadth of rectangle 3:\n");
    scanf("%d",&b3);
if(l1<0)//condition
l1=(-1)*l1;
if(l2<0)
l2=(-1)*l2;
if(l3<0)
l3=(-1)*l3;
if(b1<0)
b1=(-1)*b1;
if(b2<0)
b2=(-1)*b2;
if(b3<0)
b3=(-1)*b3;
p1=2*(l1+b1);
p2=2*(l2+b2);
p3=2*(l3+b3);
max=(p1>p2)?p1:p2;//using ternary operator
rect=(p1>p2)?1:2;
max=(max>p3)?max:p3;
rect=(max>p3)?rect:3;
printf("Perimeter of rectangle1=%d\n",p1);
printf("Perimeter of rectangle2=%d\n",p2);
printf("Perimeter of rectangle3=%d\n",p3);
printf("Rectangle %d has the highest perimeter= %d\n",rect,max);
return 0;}//terminating



