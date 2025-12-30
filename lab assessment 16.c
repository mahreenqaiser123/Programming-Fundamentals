#include <stdio.h>
int a, h;
void getData(int *height, int *side) {
    printf("Enter the height (h): ");
    scanf("%d", height);
    printf("Enter the side length (a): ");
    scanf("%d", side);
}
double volumeCal() {
    double volume = (1.0 / 3.0) * a * a * h;
    return volume;
}

int main() {
    getData(&h, &a);
    double vol = volumeCal();
    printf("The volume is: %.2lf\n", vol);
    
    return 0;
}
