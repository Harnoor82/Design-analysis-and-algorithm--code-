//Given an m × n matrix, return all elements of the matrix in spiral order

#include <stdio.h>

int main()
{
    int a[100][100];
    int m, n;
    int top, bottom, left, right;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    top = 0;
    bottom = m - 1;
    left = 0;
    right = n - 1;

    printf("Spiral order: ");

    while (top <= bottom && left <= right)
    {
        // Left to right
        for (int j = left; j <= right; j++)
            printf("%d ", a[top][j]);

        top++;

        // Top to bottom
        for (int i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);

        right--;

        // Right to left
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
                printf("%d ", a[bottom][j]);

            bottom--;
        }

        // Bottom to top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);

            left++;
        }
    }

    return 0;
}
