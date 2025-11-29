//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *file;
    int n, i;
    struct Student s;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open file in write mode to store records
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input student records and write to file
    for (i = 0; i < n; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%s %d %d", s.name, &s.roll, &s.marks);
        fprintf(file, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(file);

    // Open file in read mode to display records
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while (fscanf(file, "%s %d %d", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    }

    fclose(file);
    return 0;
}
