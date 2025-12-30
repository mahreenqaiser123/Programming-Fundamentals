#include <stdio.h>
int main() 
{
    int mark;
    int passCount;
    int failCount;
    int consecutiveFails;

    printf("Enter marks (enter -1 to stop):\n");

    while (1) 
	{
        printf("Enter mark: ");
        scanf("%d", &mark);

        if (mark == -1) {
            break; 
        }

        if (mark >= 50) {
            passCount++;
            consecutiveFails = 0;
        } else {
            failCount++;
            consecutiveFails++; 
        }

        if (consecutiveFails >= 3) {
            printf("Three or more consecutive fails entered. Stopping input.\n");
            break; 
        }
    }

    printf("\n--- Results ---\n");
    printf("Number of passing grades (>=50): %d\n", passCount);
    printf("Number of failing grades (<50): %d\n", failCount);

    return 0;
}