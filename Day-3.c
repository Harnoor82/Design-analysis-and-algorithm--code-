//Given an array of daily temperatures, find the length of the longest consecutive strictly increasing streak.

#include <stdio.h>

int main()
{
    int a[] = {10, 12, 15, 14, 16, 18, 20};
    int n = 7;
    int count = 1, max = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            count++;

            if (count > max)
                max = count;
        }
        else
        {
            count = 1;
        }
    }

    printf("Longest increasing streak = %d", max);

    return 0;
}
