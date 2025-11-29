//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    char date[20];
    int i = 0;

    // Read date in dd/mm/yyyy format
    fgets(date, 20, stdin);

    // Print day part (first two characters)
    printf("%c%c-", date[0], date[1]);

    // Check month part and convert "04" to "Apr"
    if (date[3] == '0' && date[4] == '4') {
        printf("Apr-");
    } else {
        // For other months, you can add more cases if needed
        printf("%c%c-", date[3], date[4]);
    }

    // Print year part
    i = 6;
    while (date[i] != '\0' && date[i] != '\n') {
        printf("%c", date[i]);
        i++;
    }

    printf("\n");
    return 0;
}
