//Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;
    FILE *fp;

    // Input Employee details
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    // Open file in binary write mode
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Write structure to file
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("Employee data written to file successfully.\n");

    // Read data back from file
    struct Employee readEmp;
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&readEmp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display read data
    printf("\nEmployee Data from File:\n");
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           readEmp.name, readEmp.id, readEmp.joiningDate.day,
           readEmp.joiningDate.month, readEmp.joiningDate.year);

    return 0;
}
