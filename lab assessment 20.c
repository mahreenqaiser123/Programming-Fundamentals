#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks[3];
    float average;
};
int main() 
{
    struct Student students[5];
    printf("Enter details of 5 students:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter Marks in 3 subjects: ");
        float sum = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%f", &students[i].marks[j]);
            sum += students[i].marks[j];
        }
        students[i].average = sum / 3;
    }
    printf("\nStudent Details:\n");
    printf("Name\tRoll Number\tAverage Marks\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\t\t%.2f\n", students[i].name, students[i].rollNumber, students[i].average);
    }
    float maxAverage = students[0].average;
    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (students[i].average > maxAverage) {
            maxAverage = students[i].average;
            maxIndex = i;
        }
    }
    printf("\nStudent with the highest average marks: %s (%.2f)\n", students[maxIndex].name, maxAverage);

    return 0;
}