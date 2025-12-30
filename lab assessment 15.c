#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void countFrequency(int arr[], int size)
{
    int freq[11] = {0}; 
    for(int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }

    printf("\nUnique values and their occurrences:\n");
    for(int i = 0; i <= 10; i++)
    {
        if(freq[i] > 0)
        {
            printf("Value %d occurred %d times\n", i, freq[i]);
        }
    }
}

int main(void)
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array1[size];
    srand(time(0)); 
    printf("\nGenerated Array: ");
    for(int i = 0; i < size; i++)
    {
        array1[i] = rand() % 11;
        printf("%d ", array1[i]);
    }
    countFrequency(array1, size);

    return 0;
}