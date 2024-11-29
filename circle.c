#include <stdio.h>

int main() {
    float p1, p2,total;

    printf("Enter the pie value:\n");
    scanf("%f", &p1);

    printf("Enter the radius value:\n");
    scanf("%f", &p2);

    total = p1*p2*p2;

    printf("pie: %.2f\n", p1);
    printf("radius: %.2f\n", p2);
    printf("area of circle : %.2f\n", total);

    return 0;
}

