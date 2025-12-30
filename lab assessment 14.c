#include <stdio.h>
void assignPosition();

int main() {
    assignPosition();
    return 0;
}
void assignPosition() {
    int marks;
    int experience = 0; 

    printf("Enter your test marks: ");
    scanf("%d", &marks);

    if (marks >= 70) {
        printf("Enter your years of experience: ");
        scanf("%d", &experience);
        if (experience >= 2) {
            printf("You are selected as Associate Developer.\n");
        }
		 else if (experience >= 1) {
            printf("You are selected as Assistant Developer.\n");
        }
		 else {
            printf("Your experience is insufficient for this mark level.\n");
        }
    }
	 else if (marks >= 60) {
        printf("Enter your years of experience: ");
        scanf("%d", &experience);
        if (experience >= 1) {
            printf("You are selected as Assistant Developer.\n");
        }
		 else {
            printf("Your experience is insufficient for this mark level.\n");
        }
    }
	 else if (marks >= 50) {
        printf("You are selected as Trainee Engineer.\n");
    }
	 else {
        printf("Sorry, you are not selected.\n");
    }
}
