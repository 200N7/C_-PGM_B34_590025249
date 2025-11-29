//Store details of 5 students in an array of structures and print all.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];
    
    // Input details for 5 students
    for(int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Print all students in tabular format
    printf("\n%-10s %-10s %-10s\n", "Name", "Roll No", "Marks");
    printf("---------------------------------\n");
    for(int i = 0; i < 5; i++) {
        printf("%-10s %-10d %-10d\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
