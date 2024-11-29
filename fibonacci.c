#include <stdio.h>

int main() {
    int a, b, c, i, terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    a = 0;
    b = 1;

    printf("Fibonacci Series: ");
    for (i = 1; i <= terms; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}
