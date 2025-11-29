//Return a structure containing top student's details from a function.

#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

// Function to find the student with highest marks
struct Student getTopStudent(struct Student arr[], int n) {
    struct Student top = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i].marks > top.marks) {
            top = arr[i];
        }
    }
    return top;
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for(int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Get top student
    struct Student top = getTopStudent(students, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);

    return 0;
}
