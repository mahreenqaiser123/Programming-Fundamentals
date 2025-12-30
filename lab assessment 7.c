#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
	int arr[n];
    int sumPositive = 0;
    int countPositive = 0;
    printf("Enter %d numbers: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            sumPositive += arr[i];
            countPositive++;
        }
    }

    printf("Sum of positive numbers: %d\n", sumPositive);
    if (countPositive > 0) {
        float avgPositive = (float)sumPositive / countPositive;
        printf("Average of positive numbers: %f\n", avgPositive);
    } else {
        printf("No positive numbers entered\n");
    }

    return 0;
}                                                                                                                                                                                                                                                                                                                                     
	