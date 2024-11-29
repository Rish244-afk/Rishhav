#include <stdio.h>

float calculateAverage(int marks[], int n);

int main() {
    int marks[100], n, i;
    
    printf("Enter the number of marks: ");
    scanf("%d", &n);
    
    printf("Enter the marks:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    
    float average = calculateAverage(marks, n);
    printf("Average of marks: %.2f\n", average);
    
    return 0;
}

float calculateAverage(int marks[], int n) {
    int sum = 0, i;
    for (i = 0; i < n; i++) {
        sum += marks[i];
    }
    return (float)sum / n;
}
