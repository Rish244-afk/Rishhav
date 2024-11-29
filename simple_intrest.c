#include <stdio.h>
#include <math.h>

int main() {
    int p1, p2, p3, p4;
    double simple, compound;

    printf("Principle amount:\n");
    scanf("%d", &p1);

    printf("Time:\n");
    scanf("%d", &p2);

    printf("Rate of interest:\n");
    scanf("%d", &p3);

    printf("No of months:\n");
    scanf("%d", &p4);

    simple = p1 * p2 * p3 / 100.0;
    compound = p1 * pow(1 + (p3/12.0), 12*p2) - p1;

    printf("Principle amount: %d\n", p1);
    printf("Time: %d\n", p2);
    printf("Rate of interest: %d\n", p3);
    printf("No of months: %d\n", p4);
    printf("The simple interest: %.2f\n", simple);
    printf("The compound interest: %.2f\n", compound);

    return 0;
}

