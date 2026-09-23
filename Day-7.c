//You are given a sorted array consisting of only integers where every element appears 
//exactly twice, except for one element which appears exactly once.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        int mid = (low + high) / 2;

        // Make mid even
        if (mid % 2 == 1)
            mid--;

        if (a[mid] == a[mid + 1])
        {
            low = mid + 2;
        }
        else
        {
            high = mid;
        }
    }

    printf("Single element = %d", a[low]);

    return 0;
}
