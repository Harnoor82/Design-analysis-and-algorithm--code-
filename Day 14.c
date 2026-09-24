//Given two array arr1 and arr2 your task is to find out the smallest difference between two array elements.

#include <stdio.h>
#include <stdlib.h>

int absDiff(int a, int b) {
    return a > b ? a - b : b - a;
}

int smallestDifference(int arr1[], int m, int arr2[], int n) {
    int i = 0, j = 0;
    int minDiff = absDiff(arr1[0], arr2[0]);

    while (i < m && j < n) {
        int diff = absDiff(arr1[i], arr2[j]);
        if (diff < minDiff) minDiff = diff;

        if (arr1[i] < arr2[j]) i++;
        else j++;
    }
    return minDiff;
}

int main() {
    int arr1[] = {1, 3, 15, 20};
    int arr2[] = {8, 10, 12};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    printf("Smallest difference = %d\n", smallestDifference(arr1, m, arr2, n));
    return 0;
}
