#include <stdlib.h>

int main() {
    int num;
    long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        exit(1); 
    } else if (num == 0) {
        printf("The factorial of 0 is 1.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("The factorial of %d is %lld.\n", num, factorial);
    }

    return 0; 
}