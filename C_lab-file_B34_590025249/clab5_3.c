#include <stdio.h>

int main() {
    int arr[100], n, i, num, freq = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to find frequency: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++) {
        if (arr[i] == num)
            freq++;
    }

    if (freq == 0)
        printf("%d does NOT exist in the array.\n", num);
    else
        printf("Frequency of %d = %d\n", num, freq);

    return 0;
}
