#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, value;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n == 1)
        printf("%d is not a prime number.\n", n);
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                value = 1;
                break;
            }
        }
        if (value == 1)
            printf("%d is not a prime number.\n", n);
        else
            printf("%d is a prime number.\n", n);
    }
    getch();
}