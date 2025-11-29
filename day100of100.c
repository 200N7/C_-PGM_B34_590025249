//Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;            // Regular struct variable
    struct Student *ptr = &s;    // Pointer to struct

    // Input data using pointer
    printf("Enter Name, Roll, Marks: ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    // Modify data via pointer (optional, if you want to demonstrate modification)
    // For example, adding 1 to marks
    // ptr->marks += 1;

    // Display modified data using pointer
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", 
            ptr->name, ptr->roll, ptr->marks);

    return 0;
}
