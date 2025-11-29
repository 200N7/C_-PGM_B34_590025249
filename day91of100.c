//Define a structure Student with name, roll_no, and marks, then read and print one student's data.

#include <stdio.h>

// Define structure Student
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;

    // Input student data
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);
    printf("Enter Marks: ");
    scanf("%d", &s.marks);

    // Print student data
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}
