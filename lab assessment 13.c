#include <stdio.h>
int main() {
    char firstName[50], lastName[50], fullName[100];
    int i, j, k;
	printf("Enter first name: ");
    scanf("%s", firstName);
    printf("Enter last name: ");
    scanf("%s", lastName);
    for (i = 0; firstName[i]; i++) {
        fullName[i] = firstName[i];
    }
    fullName[i] = ' ';
    i++;
    for (j = 0; lastName[j]; j++) {
        fullName[i + j] = lastName[j];
    }
    fullName[i + j] = '\0';
    printf("Full name: %s\n", fullName);
    printf("Full name in reverse: ");
    for (k = i + j - 1; k >= 0; k--) {
        printf("%c", fullName[k]);
    }
    printf("\n");
    return 0;
}