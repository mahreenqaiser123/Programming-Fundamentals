#include <stdio.h>
int main() 
{
    int size, i;
    float sum=0, average=0;
    int positive_count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int numbers[size];
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < size; i++) 
	{
        if (numbers[i] > 0) 
		{  
            sum += numbers[i];
            positive_count++;
        }
    }
    printf("\nSum of positive numbers: %f\n", sum);
    if (size > 0) 
	{
    	average = sum/positive_count;
        printf("Average of all numbers: %f\n", average);
    } else 
	{
        printf("Cannot calculate the average \n");
    }

    return 0;
}
