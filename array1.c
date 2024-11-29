#include <stdio.h>

int display(int marks[]);

int main() {
    int marks[5] = {99, 90, 96, 93, 95};
    display(marks);
    return 0;
}

int display(int marks[]) {
    int i;
    int sum = 0;
    for (i = 0; i < 5; i++) {
        printf("%d\t", marks[i]);
        sum += marks[i];
    }
    float avg = (float)sum / 5;
    printf("\nAverage: %.2f\n", avg);
}
