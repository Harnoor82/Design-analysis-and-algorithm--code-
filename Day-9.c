#include <stdio.h>

void reverse(int a[], int start, int end)
{
    while (start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;

    // Step 1: Reverse the whole array
    reverse(a, 0, n - 1);

    // Step 2: Reverse the first k elements
    reverse(a, 0, k - 1);

    // Step 3: Reverse the remaining elements
    reverse(a, k, n - 1);

    printf("Rotated array: ");

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
