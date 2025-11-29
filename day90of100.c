//Define a struct with enum Gender and print person's gender.

#include <stdio.h>

// Define enum for Gender
enum Gender { MALE, FEMALE, OTHER };

// Define struct Person
struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    // Example input
    // You can take input from user as well if needed
    p.gender = MALE;

    // Print gender
    if (p.gender == MALE)
        printf("Male\n");
    else if (p.gender == FEMALE)
        printf("Female\n");
    else
        printf("Other\n");

    return 0;
}
