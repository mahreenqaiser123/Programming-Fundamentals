#include <stdio.h>
int main() {
    float arr[20];
    float *ptr = arr;
    int i;
    float first, second;
    printf("Enter 20 float numbers:\n");
    for(i = 0; i < 20; i++) 
	{
        scanf("%f", ptr + i);  
    }
    if (*ptr > *(ptr + 1)) 
	{
        first = *ptr;
        second = *(ptr + 1);
    } else 
	{
        first = *(ptr + 1);
        second = *ptr;
    }
    for(i = 2; i < 20; i++) 
	{
        if (*(ptr + i) > first) 
		{
            second = first;
            first = *(ptr + i);
        } 
		else if (*(ptr + i) > second && *(ptr + i) != first) 
		{
            second = *(ptr + i);
        }
    }

    printf("The second highest number is: %f\n", second);

    return 0;
}
