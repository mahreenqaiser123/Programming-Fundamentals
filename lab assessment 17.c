#include <stdio.h>
int main() 
{
    int a = 0;
    int b = 1;
    int nextTerm;

    printf("Fibonacci numbers (up to 500, skipping multiples of 5, stopping if > 300):\n");
    if (a <= 300 && a % 5 != 0) 
	{
        printf("%d ", a);
    }
    if (b <= 300 && b % 5 != 0) 
	{
        printf("%d ", b);
    }

    while (1) 
	{
        nextTerm = a + b;

        if (nextTerm > 300)
		{
            break; 
        }

        if (nextTerm % 5 == 0)
		{
            a = b;
            b = nextTerm;
            continue; 
        }

        printf("%d ", nextTerm);

        a = b;
        b = nextTerm;
    }

    printf("\n");
    return 0;
}