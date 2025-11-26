#include <stdio.h>
#include <string.h>
int main() 
{
    char firstname[40]; 
    char lastname[40];  
    char fullname[80];
    printf("Enter your first name: ");
    scanf("%s", firstname); 
    printf("Enter your last name: ");
    scanf("%s", lastname);
    strcpy(fullname, firstname); 
    strcat(fullname, " ");  
    strcat(fullname, lastname);  
    printf("Full name: %s\n", fullname);
    int charCount = strlen(fullname);
    printf("Number of characters in full name: %d\n", charCount);

    return 0;
}