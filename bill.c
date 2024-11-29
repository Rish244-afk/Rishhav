#include <stdio.h>

int main() {
    float p1, p2, p3, p4, p5, total;

    printf("Enter the price of item 1:\n");
    scanf("%f", &p1);

    printf("Enter the price of item 2:\n");
    scanf("%f", &p2);

    printf("Enter the price of item 3:\n");
    scanf("%f", &p3);

    printf("Enter the price of item 4:\n");
    scanf("%f", &p4);

    printf("Enter the price of item 5:\n");
    scanf("%f", &p5);

    total = p1 + p2 + p3 + p4 + p5;

    printf("Price of item 1: %.2f\n", p1);
    printf("Price of item 2: %.2f\n", p2);
    printf("Price of item 3: %.2f\n", p3);
    printf("Price of item 4: %.2f\n", p4);
    printf("Price of item 5: %.2f\n", p5);
    printf("The total price is: %.2f\n", total);

    return 0;
}

