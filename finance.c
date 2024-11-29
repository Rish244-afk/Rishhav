#include <stdio.h>

int main() {
    int p1, p2, p3,total;

    printf("Enter the no.of hours worked in a week:\n");
    scanf("%d", &p1);

    printf("Enter the rate per hour:\n");
    scanf("%d", &p2);

    printf("Enter the no.of weeks in a month:\n");
    scanf("%d", &p3);

    total = p1*p2*p3;

    printf("No.of hours in a week: %d\n", p1);
    printf("Rate per hpur: %d\n", p2);
    printf("No.of weeks i a month: %d\n", p3);
    printf("Monthly pay: %d\n", total);

    return 0;
}

