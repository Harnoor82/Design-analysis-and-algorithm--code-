//Write a C program that accepts a positive integer containing digits from 0 to 9. Exactly one digit is missing, while the remaining nine digits appear exactly once. 

#include <stdio.h>

int main()
{
    int n, digit;
    int a[10] = {0};

    printf("Enter number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        a[digit] = 1;
        n = n / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 0)
        {
            printf("%d", i);
        }
    }

    return 0;
}
