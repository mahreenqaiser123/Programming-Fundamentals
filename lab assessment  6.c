#include <stdio.h>
#include <string.h> // for strlen

int main() {
    char name[100], courses[200], allInput[301] = {0};
    int freq[256] = {0}, maxFreq = 0;
    char maxChar = '\0';

    printf("Enter your name: ");
    scanf(" %[^\n]", name);
    printf("Enter courses offered (separated by commas): ");
    scanf(" %[^\n]", courses);

    sprintf(allInput, "%s%s", name, courses);

    for(int i = 0; i < strlen(allInput); i++) {
        char c = allInput[i];
        if(c != ' ' && c != ',') { // ignoring spaces and commas
            freq[(unsigned char)c]++;
            if(freq[(unsigned char)c] > maxFreq) {
                maxFreq = freq[(unsigned char)c];
                maxChar = c;
            }
        }
    }

    printf("Max occurring character: '%c' with frequency %d\n", maxChar, maxFreq);
    return 0;
}