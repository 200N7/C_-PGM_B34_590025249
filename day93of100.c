//Find and print the student with the highest marks.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input details for n students
    for(int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Find student with highest marks
    int topper_index = 0;
    for(int i = 1; i < n; i++) {
        if(students[i].marks > students[topper_index].marks) {
            topper_index = i;
        }
    }

    // Print topper
    printf("\nTopper: %s (Marks: %d)\n", students[topper_index].name, students[topper_index].marks);

    return 0;
}
