#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max1, max2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = -999999;

    for (i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } 
        else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    if (max2 == -999999)
        printf("No second largest number (all elements same)\n");
    else
        printf("Second largest = %d\n", max2);

    return 0;
}



