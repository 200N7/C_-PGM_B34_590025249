//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>

int main() {
    // Define enum for traffic lights
    enum TrafficLight { RED, YELLOW, GREEN };

    // Input value for traffic light
    enum TrafficLight light;
    char input[10];
    printf("Enter traffic light (RED, YELLOW, GREEN): ");
    scanf("%s", input);

    // Map input string to enum value
    if (strcmp(input, "RED") == 0) {
        light = RED;
    } else if (strcmp(input, "YELLOW") == 0) {
        light = YELLOW;
    } else if (strcmp(input, "GREEN") == 0) {
        light = GREEN;
    } else {
        printf("Invalid input!\n");
        return 1;
    }

    // Print corresponding action
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}
