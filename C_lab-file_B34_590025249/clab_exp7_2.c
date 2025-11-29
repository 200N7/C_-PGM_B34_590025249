/*2. Write a C program to compute the monthly pay of 100 employees using each employee‗s name, basic pay. The DA is computed as 52% of the basic pay.
Gross-salary (basic pay + DA). Print the employees name and gross salary.*/ 

#include <stdio.h>
struct Employee {
    char name[50];
    float basic;
    float gross;
};
int main() {
    struct Employee emp[100];
    int i;
    float da;
    printf("Enter details of 100 employees:\n");
    for(i = 0; i < 100; i++) {
        printf("\nEmployee %d:\n", i + 1);
                printf("Enter name: ");
        scanf("%s", emp[i].name);   // reading name
                printf("Enter basic pay: ");
        scanf("%f", &emp[i].basic);
        // DA = 52% of basic
        da = 0.52 * emp[i].basic;
        // Gross salary
        emp[i].gross = emp[i].basic + da;
    }printf("\n-----------------------------\n");
    printf("Employee Name  |  Gross Salary\n");
    printf("-----------------------------\n");
    for(i = 0; i < 100; i++) {
        printf("%-15s %.2f\n", emp[i].name, emp[i].gross);
    }return 0;
}
