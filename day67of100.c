//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main() {
    int m, n;

    // Input sizes
    scanf("%d %d", &m, &n);

    int nums1[100], nums2[100], merged[200];

    // Input first array
    for(int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    // Input second array
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int i = 0, j = 0, k = 0;

    // Merge arrays
    while(i < m && j < n) {
        if(nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    // Copy remaining elements
    while(i < m) {
        merged[k++] = nums1[i++];
    }
    while(j < n) {
        merged[k++] = nums2[j++];
    }

    // Print merged array
    for(int t = 0; t < k; t++) {
        printf("%d ", merged[t]);
    }

    return 0;
}
