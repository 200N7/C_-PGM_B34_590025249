#include <stdio.h>

// GLOBAL VARIABLE
int globalVar = 20;

void func1() {
    printf("Inside func1: globalVar = %d\n", globalVar);
}

void func2() {
    printf("Inside func2: globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main: globalVar = %d\n", globalVar);
    func1();
    func2();
    return 0;
}
