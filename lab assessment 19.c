#include <stdio.h>
struct Employee 
{
    int id;
    char name[50];
    float salary;
};

int main() 
{
    struct Employee employees[3];
    printf("Enter details of 3 employees:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter Name: ");
        scanf(" %[^\n]", employees[i].name); 
        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);
    }
    printf("\nEmployee Details:\n");
    printf("ID\tName\t\t\tSalary\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\t%s\t\t%f\n", employees[i].id, employees[i].name, employees[i].salary);
    }

    return 0;
}