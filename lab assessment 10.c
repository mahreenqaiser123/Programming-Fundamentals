#include <stdio.h>

int main() 
{
    int n1 = 1, n2 = 1, next, sum = 0;

    printf("Fibonacci Series up to 1000:\n");
    printf("%d, %d", n1, n2);

    next = n1 + n2;

    while (next <= 1000) {
        printf(" %d", next);

        if (next % 3 == 0 && next % 5 == 0 && next % 7 == 0) {
            sum += next;
        }

        n1 = n2;
        n2 = next;
        next = n1 + n2;
}

    printf("\n\nSum of Fibonacci numbers divisible by 3, 5, and 7 only: %d\n", sum);
}
